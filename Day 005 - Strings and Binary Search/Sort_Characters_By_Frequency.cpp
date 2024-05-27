class Solution {
public:
    string frequencySort(string s) {
        vector<int>freq(26,0);
        for(int i=0 ; i<s.length(); i++){
            int idx = s[i]-'a';
            freq[idx]++;
        }
        int j=0;
        for(int i=0 ; i<26 ; i++){
            while(freq[i]--){
                s[j++]= i+'a';
                /* In the line `s[j++]= i+'a';`, the expression `i+'a'` is converting the integer value `i`
                to its corresponding character in the lowercase alphabet by adding the ASCII value of
                'a'. This character is then assigned to the `j`-th position in the string `s`, and the
                value of `j` is incremented by 1 using the post-increment operator `++`. This operation
                effectively builds a sorted string based on the frequency of characters in the original
                string `s`. */
            }
        }
        return s;
    }
};