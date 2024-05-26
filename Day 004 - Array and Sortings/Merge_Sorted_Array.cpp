class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=0; i<n; i++){
            nums1[m+i] = nums2[i];
        }
        sort(nums1.begin(), nums1.end());
    }
};

// Better approach having T.C.=O(m+n) and S.C.=O(1)
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int a = m-1;
    int b = n-1;
    int c = m+n-1;

    while(a>=0 && b>=0){
        if(nums1[a] > nums2[b]){
            nums1[c--] = nums1[a--];
        }else{
            nums1[c--] = nums2[b--];
        }
    }

    while(a>=0){
        nums1[c--]=nums1[a--];
    }

    while(b >= 0){
        nums1[c--] = nums2[b--];
    }
}
