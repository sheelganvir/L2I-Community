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
