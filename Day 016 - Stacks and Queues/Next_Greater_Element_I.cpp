class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            int max=-1;
            for(int j=0;j<nums2.size();j++){
                int index=j;
                if(nums1[i]==nums2[j]){ // Found element in nums2 that matches current element in nums1
                     while(index!=nums2.size()){ // Iterate through remaining elements in nums2 to find next greater element
                        if(nums2[index]>nums1[i]){
                            max=nums2[index]; // Update max if we find a greater element
                            break;
                        }
                        index++;
                    }
               }
            }
            ans.push_back(max);
        }
        return ans;
    }
};

/*
    TC: O(n*m), where n is the size of nums1 and m is the size of nums2
    SC: O(n)
*/