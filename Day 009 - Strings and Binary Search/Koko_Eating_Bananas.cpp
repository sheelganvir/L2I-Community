long long calculateTotalHours(vector<int> &v, long long hourly){
        long long totalH = 0;
        int n = v.size();
        for(int i=0;i<n;i++){
            totalH += ceil((double)v[i] / (double)hourly);
        }
        return totalH;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
      
        long long low = 1;
        long long high = *max_element(piles.begin(),piles.end());
        while(low <= high){
            long long mid = (low+high)/2;
            long long totalH = calculateTotalHours(piles,mid);
            if(totalH <= h){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }

        return low;
    }
// T.C.= O(n log m), where n is the number of elements in the input vector "piles" and m is the maximum element in the vector
// S.C.= O(1)
