class Solution {
public:
    int check(int target, vector<int>& tops, vector<int>& bottoms) {
        int topRotations = 0, bottomRotations = 0;
        int n = tops.size();

        for (int i = 0; i < n; i++) {
            if (tops[i] != target && bottoms[i] != target) {
                return -1; 
            }
            else if (tops[i] != target) {
                topRotations++; 
            }
            else if (bottoms[i] != target) {
                bottomRotations++; 
            }
        }
        return min(topRotations, bottomRotations);
    }

    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int rotations = check(tops[0], tops, bottoms);
        if (rotations != -1) return rotations;

        
        if (tops[0] != bottoms[0]) {
            rotations = check(bottoms[0], tops, bottoms);
        }

        return rotations;
    }
};