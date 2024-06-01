bool possible(vector<int> &arr,int day,int m,int k){
	int cnt = 0;
	int nOfB = 0;
	for(int i=0;i<arr.size();i++){
		if(arr[i] <= day){
			cnt++;
		}else{
			nOfB += (cnt/k);
			cnt = 0;
		}
	}
	nOfB += (cnt/k);
	return nOfB >= m;
}

int minDays(vector<int> arr, int m, int k)
{
	long long int val = k*1LL*m*1LL;
	if(val > arr.size()) return -1;

	int mini = *min_element(arr.begin(),arr.end());
    int maxi = *max_element(arr.begin(),arr.end());
	int low = mini, high = maxi;
	while(low <= high){
		int mid = (low+high)/2;
		if(possible(arr,mid,m,k)){
			high = mid-1;
		}else low = mid+1;
	}
	return low;
}
// Time Complexity = O(N*log(maxi-mini+1))  where N is the size of the input array 'arr', 
// and maxi and mini are the maximum and minimum elements in the array, respectively. 
// S.C.= O(1)
