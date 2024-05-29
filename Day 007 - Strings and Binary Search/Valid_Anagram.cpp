bool isAnagram(string s, string t) {
    if(s.size() != t.size()){
        return false;
    }

    vector<int> charCount(26,0);

    for(int i=0;i<s.size();i++){
        charCount[s[i] - 'a']++;
        charCount[t[i] - 'a']--;
    }

    for(int count : charCount){
        if(count != 0){
            return false;
        }
    }

    return true;
}
//  T.C.= O(n)    S.C.= O(1)
