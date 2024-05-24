string longestCommonPrefix(vector<string>& strs) {
    if(strs.empty()){
        return "";
    }

    string prefix = strs[0];

    for(int i=1;i<strs.size();i++){
        int j=0;
        while(j<prefix.size() && j<strs[i].size() && prefix[j]==strs[i][j]){
            j++;
        }

        prefix = prefix.substr(0,j);

        if(prefix.empty()){
            break;
        }
    }

    return prefix;
}
//   T.C.= O(n*m), where n is the number of strings in the input vector and m is the length of the shortest string
//   S.C.= O(1)
