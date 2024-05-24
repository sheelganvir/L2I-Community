vector<int> rearrangeArray(vector<int>& nums) {
        int n= nums.size();
        int ai=0;
        int bi=1;
        vector<int> v(nums.size());
        for(int i=0 ; i< n ; i++){
            if(nums[i]>=0){
                v[ai]=nums[i];
                ai+=2;
            }
            else{
                v[bi]=nums[i];
                bi+=2;
            }
        }
        
        return v;
    }