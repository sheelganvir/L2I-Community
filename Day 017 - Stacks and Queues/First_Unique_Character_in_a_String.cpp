class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> oc(26);
        //store frequency of each character of s
        for (auto i : s) oc[i - 'a']++;
        //first character with frequency = 1 is the answer
        for (int i = 0; i < s.size(); i++) {
            if (oc[s[i] - 'a'] == 1) return i;
        }
        //no character with frequency = 1
        return -1;
    }
};

// Method 2
class Solution {
public:
    int firstUniqChar(string s) {
    // can also use unordered_map (it will work same)
       queue<int> q;
       int arr[26]={0};
       for(int i=0;i<s.length();i++){
           char ch=s[i];
           q.push(i);
           arr[ch-'a']++;
           while(!q.empty()){
               if(arr[s[q.front()]-'a']>1)
                    q.pop();
                else break;
           }
       }
        if(q.empty())
            return -1;
        return q.front(); 
    }
};


// Method 3
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> m;

        for(int i=0;i<s.length();i++)
        // storing how many times a character appears in order
        // leetcode -> l e t c o d
        //             1 3 1 1 1 1
        // first time unique character apeared is -> l in string
          m[s[i]]++;

        // m[s[0]] -> s[0] = l and m[s[0]] =1
        // m[s[1]] -> s[1] = e and m[s[1]] =3
        // m[s[2]] -> s[2] = t and m[s[2]] =1
        // and so on
        for(int i=0;i<s.length();i++)
          {
              if(m[s[i]]==1)     
                return i;
          }
          return -1;   
    }
};
