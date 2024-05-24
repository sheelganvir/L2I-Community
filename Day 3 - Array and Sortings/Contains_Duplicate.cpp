class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        bool check = false;
        for(int i=1 ; i<nums.size() ; i++){
            if(nums[i]==nums[i-1]){
                check = true;
            }
        }
        return check;
    }
// T.C.=O(nlogn)   S.C.=O(1)
};

bool containsDuplicate(vector<int>& nums) {
    
    unordered_map<int, int> cnt;
    for(int i=0;i<nums.size();i++){
        if(cnt[nums[i]]>=1){
            return true;
        }else{
            cnt[nums[i]]++;
        }
    }

    return false;
}
// T.C.=O(n)  S.C.=O(n)
