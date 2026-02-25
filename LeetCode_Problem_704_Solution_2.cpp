class Solution {
public:
    int search(vector<int>& nums, int target) {
        int Lindex = 0;
        int Rindex = nums.size() - 1;
        int midIndex = ((Lindex + Rindex) / 2) ;

        while(Lindex <= Rindex){
            if(nums[midIndex] == target){
                return midIndex;
            }

            else{
                if(target > nums[midIndex]){
                    Lindex = midIndex + 1;
                    midIndex = ((Lindex + Rindex) / 2) ; 
                }

                else{
                    Rindex = midIndex - 1;
                    midIndex = ((Lindex + Rindex) / 2);
                }
            }
        }

        return -1;
    }
};
