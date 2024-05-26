// The brute force approach for this question will be creating an array and merge the given arrays into it in sorted array.
// After this choose the element at n/2  position and return it if n is odd & if n is even return ( ele(n/2) + ele(n/2 - 1) )/2.
// T.C.=O(n1+n2)   S.C.= O(n1+n2)


//**************** Better Approach ***************
double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
    int n1 = a.size(), n2 = b.size();
    int n = n1+n2;
    int i = 0;
    int j = 0;
    int cnt = 0;
    int idx2 = n/2;
    int idx1 = n/2 - 1;
    int idx1ele = -1, idx2ele = -1;
    while(i < n1 && j < n2){
        if(a[i] < b[j]){
            if(cnt == idx1) idx1ele = a[i];
            if(cnt == idx2) idx2ele = a[i];
            i++;
            cnt++;
        }else{
            if(cnt == idx1) idx1ele = b[j];
            if(cnt == idx2) idx2ele = b[j];
            j++;
            cnt++;
        }
    }

    while(i < n1){
        if(cnt == idx1) idx1ele = a[i];
        if(cnt == idx2) idx2ele = a[i];
        cnt++;
        i++;
    }
    while(j < n2){
        if(cnt == idx1) idx1ele = b[j];
        if(cnt == idx2) idx2ele = b[j];
        cnt++;
        j++;
    }

    if(n%2 == 1){
        return idx2ele;
    }

    return (double)((double)(idx1ele + idx2ele)/2);

}
//  T.C.=O(n1+n2)   S.C.= O(1)
