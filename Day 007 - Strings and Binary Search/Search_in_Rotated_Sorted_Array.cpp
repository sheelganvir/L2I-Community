bool search(vector<int>& arr, int key) {
    int n=arr.size();
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key) return true;
        if(arr[low]==arr[mid] && arr[mid]==arr[high]){
            low=low+1;
            high=high-1;
            continue;
        }

        if(arr[low]<=arr[mid]){
            if(arr[low]<=key && key<=arr[mid]){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }else{
            if(arr[mid]<=key && key<=arr[high]){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
    }

    return false;
}
// T.C.= O(logn)    S.C.= O(1)
