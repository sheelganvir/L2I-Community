int smallestDivisor(const vector<int>& nums, int threshold) {
    int low = 1;
    int high = *max_element(nums.begin(), nums.end());

    while(low <= high){
        int mid = low + (high - low) / 2;
        int sum = 0;

        for(int num : nums){
            sum += ceil((double)(num) / (double)(mid));
        }

        if(sum <= threshold) {
            high = mid-1;
        } else {
            low = mid+1;
        }
    }

    return low;
}
//  T.C.= O(n * log(max(nums))), where n is the number of elements in the input vector nums and max(nums) is the maximum element in nums
//  S.C.= O(1)
