vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> v(2,-1);
    int p=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==target){
            v[p++]=i;
            break;
        }
    }
    for(int j=nums.size()-1;j>=0;j--){
        if(nums[j]==target){
            v[p++]=j;
            break;
        }
    }

    return v;

}
//  T.C.=O(n)     S.C.=O(1)

vector<int> searchRange(vector<int>& arr, int target) {
    int n = arr.size();
    int i = lower_bound(arr.begin(),arr.end(),target) - arr.begin();
    int j = upper_bound(arr.begin(),arr.end(),target) - arr.begin();

    if(i == n || arr[i] != target){
        return {-1,-1};
    }
    return {i,j-1};
}

//   T.C.= O(log n) because it uses binary search to find the lower and upper bounds of the target element in the sorted array
//   S.C.= O(1)


//****** Detailed implementation of upper and lower bound *******
vector<int> searchRange(vector<int>& nums, int target) {
    int n = nums.size();
    int low = 0;
    int high = n-1;
    int first = -1, last = -1;

    while(low <= high){
        int mid = (low+high)/2;
        if(nums[mid] == target){
            first = mid;
            high = mid-1;
        }else if(nums[mid] > target){
            high = mid-1;
        }else{
            low = mid+1;
        }
    }

    low = 0, high = n-1;
    while(low <= high){
        int mid = (low+high)/2;
        if(nums[mid] == target){
            last = mid;
            low = mid+1;
        }else if(nums[mid] > target){
            high = mid-1;
        }else{
            low = mid+1;
        }
    }

    if(first == -1){
        return {-1,-1};
    }

    return {first,last};
        
}
