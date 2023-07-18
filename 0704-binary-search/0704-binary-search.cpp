class Solution {
public:
    int binarySearch(vector<int> &nums, int s, int e, int &k){
        int mid = s + (e-s)/2;
        if(s>e)
            return -1;

        if(nums[mid] == k)
            return mid;

        if(nums[mid]<k){
            return binarySearch(nums, mid+1, e, k);
        }
        else{
            return binarySearch(nums, s, mid-1, k);
        }
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int ans = binarySearch(nums, 0, n-1,target);
        return ans;
    }
};