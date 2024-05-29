string reverseWords(string s) {
    int n = s.size();
    string ans = "";
    int i = 0;

    while(i < n){
        string temp = "";
        while(i < n && s[i] == ' ')i++;

        while(i < n && s[i] != ' '){
            temp += s[i];
            i++;
        }

        if(!temp.empty()){
            if(ans.empty()){
                ans = temp;
            }else{
                ans = temp + " " + ans;
            }
        }
    }

    return ans;
}
//   T.C.= O(N)   S.C.= O(N)
