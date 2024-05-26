int searchInsert(vector<int>& nums, int target) {
    int n=nums.size();
    int low=0,high=n-1;

    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid] == target){
            return mid;
        }
        else if(nums[mid] > target){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }

    return low;

}

//  T.C.= O(logn)     S.C.= O(1)
