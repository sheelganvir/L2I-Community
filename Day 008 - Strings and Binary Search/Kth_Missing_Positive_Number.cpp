//************** Brute Force ****************
int findKthPositive(vector<int>& arr, int k) {
    int n = arr.size();

    for(int i = 0;i < n;i++){
        if(arr[i] <= k)
            k++;
        else{
            break;
        }
    }
    return k;
}
//  T.C.= O(n)  S.C.= O(1)

//************* Optimised Approach ************
int findKthPositive(vector<int>& arr, int k) {
        int low = 0;
        int high = arr.size()-1;

        while(low <= high){
            int mid = (low+high)/2;
            int missing = arr[mid] - (mid+1);

            if(missing < k){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }

        return high+1+k;
}
//  T.C.= O(logn)   S.C.= O(1)
