int findMin(vector<int>& arr) {
    int n=arr.size();
    int low=0,high=n-1,ans=INT_MAX;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[low]<=arr[mid]){
            ans=min(ans,arr[low]);
            low=mid+1;
        }else{
             ans=min(ans,arr[mid]);
             high=mid-1;
        }
    }

    return ans;
        
}
//  T.C.= O(logn)  S.C.= O(1)

Alternate Code


int findMin(vector<int>& nums) {
    if(nums.size()==1) return nums[0];
    int lo=0;
    int hi = nums.size()-1;
    if(nums[lo]<nums[hi]){
        return nums[lo];
    }
    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(nums[mid]>nums[mid+1]) return nums[mid+1];
        if(nums[mid]<nums[mid-1]) return  nums[mid];
        if(nums[mid]>nums[lo]){
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }
    }
    return -1;
}
