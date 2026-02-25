class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> rtrnNums(nums.size() * 2);
        
        int l = 0;

        for(int i = 0; i < rtrnNums.size(); i++){
            rtrnNums[i] = nums[l];
            ++l;
            if(l == (nums.size()))
            l = 0;
        }

        return rtrnNums; 
    }
};
