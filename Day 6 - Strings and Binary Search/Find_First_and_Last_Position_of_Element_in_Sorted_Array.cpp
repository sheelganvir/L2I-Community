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
