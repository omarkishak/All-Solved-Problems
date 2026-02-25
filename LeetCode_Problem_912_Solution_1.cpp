#include <vector>
class Solution {
public:

void merge(vector<int>& arr, int s, int m, int e){
    vector<int> L = {arr.begin() + s, arr.begin() + m + 1};
    vector<int> R = {arr.begin() + m + 1, arr.begin() + e + 1}; 

    int i = 0;
    int j = 0;
    int k = s;

    while(i < L.size() && j < R.size()){
        if(L[i] <= R[j]){
        arr[k] = L[i++];}

        else{
        arr[k] = R[j++];}

        k++;
    }
    
     while (i < L.size()) {
        arr[k++] = L[i++];
    }
    while (j < R.size()) {
        arr[k++] = R[j++];
    }
}

vector<int> mergeSort(vector<int>& arr, int s, int e) {
    if (e - s + 1 <= 1) {
        return arr;
    }

    int m = (s + e)  / 2;

    mergeSort(arr, s, m);

    
    mergeSort(arr, m + 1, e);

    
    merge(arr, s, m, e);
    
    return arr;

}

    vector<int> sortArray(vector<int>& nums) {
        int s = 0;
        int e = nums.size() - 1;
        

        mergeSort(nums, s, e);

        return nums;
  
    }
};
