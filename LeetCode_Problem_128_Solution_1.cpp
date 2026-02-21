class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //save the array in our set
        unordered_set map(nums.begin(), nums.end());
        int longest = 0;

        for(int n : map){
            //if you can't find n-1, that means n is the beginning of our sequence. if .find() failes, it returns map.end().
            if(map.find(n - 1) == map.end()){

                int streak = 1, current_num = n;

                //if you find current_num +1, increase streak + move to the next number.
                while(map.find(current_num + 1) != map.end()){
                    current_num++;
                    streak++;
                }

                //return the longest streak.
                longest = max(longest, streak);
            }
        }

        return longest;
    }
};