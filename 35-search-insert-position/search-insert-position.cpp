class Solution {
public:
    int searchInsert(vector<int>& arr, int t) {
    int low=0, high=(arr.size()-1);
    int mid=0;
    int ans=0;
    bool flag=0;
    while(low<=high)
    {
        mid = low + ((high - low)/2);
        if(arr[mid]==t)
        {
            return mid;
        }
        else if(arr[mid]<t)
        {
            low=mid+1;
        }
        else if(arr[mid]>t)
        {
            high = mid-1;
        }
    }
    return low;
    }
};