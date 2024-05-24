class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        return nums[n/2];
    }
};

// Optimal Approach having T.C.=O(n)
// This approach is known as Moore Voting Algorithm
int majorityElement(vector<int> v) {

    int n = v.size();
    int cnt=0;
    int ele;

    for(int i=0;i<n;i++){
        if(cnt==0){
            ele=v[i];
            cnt=1;
        }else if(v[i]==ele){
            cnt++;
        }else{
            cnt--;
        }
    }
    
    int cnt1=0;
    for(int i=0;i<n;i++){
        if(v[i]==ele){
            cnt1++;
        }
    }
    if(cnt1>(n/2)){
        return ele;
    }
    return -1;
}
