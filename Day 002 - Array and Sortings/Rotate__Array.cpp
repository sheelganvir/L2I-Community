class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;

        vector<int>temp(k);
   
        int i=0;
        for(int j=n-k;j<n;j++){  
            temp[i]=nums[j];  
            i++;
        }

        i=n-1;  
        for(int j=n-k-1;j>=0;j--){
            nums[i]=nums[j];
            i--; 
        }
        
        for(int j=0;j<=i;j++){    
           nums[j]=temp[j];      
                                  
        }

    }
};