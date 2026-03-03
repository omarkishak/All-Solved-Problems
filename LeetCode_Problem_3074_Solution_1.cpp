class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(), capacity.end());

        int aplTotal = 0;
        for(int i: apple){
            aplTotal += i;
        }

        int Csize = capacity.size();
        int Cchecker = 0;
        int result = 0;

           for(int i = Csize - 1; i >= 0; i--) {
            Cchecker += capacity[i];

            if(Cchecker >= aplTotal){
            return ++result;
            }
            ++result;
         }
           return result;
    }
};