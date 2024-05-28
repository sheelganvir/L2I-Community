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
