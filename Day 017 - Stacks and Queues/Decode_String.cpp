/************************************************ First Approach *********************************************************
 
    T.C. : O(n), where n is the length of the input string s. 
    This is because we iterate through each character in the string once, and for each digit encountered, 
    we recursively call the decodeString function.

    S.C.: O(n), where n is the length of the input string s. 
    This is because we use a recursive approach to decode the string, and each recursive call adds to the call stack. 
    Additionally, the space used for the result string res also contributes to the space complexity.


*/

class Solution {
public:
    string decodeString(const string& s, int& i) {
        string res;
        
        while (i < s.length() && s[i] != ']') {
            if (!isdigit(s[i]))
                res += s[i++];
            else {
                int n = 0;
                while (i < s.length() && isdigit(s[i]))
                    n = n * 10 + s[i++] - '0';
                    
                i++; // '['
                string t = decodeString(s, i);
                i++; // ']'
                
                while (n-- > 0)
                    res += t;
            }
        }
        
        return res;
    }

    string decodeString(string s) {
        int i = 0;
        return decodeString(s, i);
    }
};

/************************************************ Second Approach *********************************************************
 
    T.C. : O(n), where n is the length of the input string s. 
            This is because we are traversing the input string once and 
            performing constant time operations for each character.

    S.C.: O(n), where n is the length of the input string s. 
            This is because we are using a string variable to store the decoded string, 
            and the maximum size of this string will be equal to the length of the input string. 
            Additionally, we are using a few extra string variables to store intermediate results, 
            but their total space complexity is also O(n) as they are not larger than the input string.
*/

string decodedString(string s){
    string result = "";

    //traversing the encoded string
    for(int i=0 ; i<s.length(); i++){
        if(s[i]!=']'){
            result.push_back(s[i]);
        }
        else{
            string str = "";
            while(!result.empty() && result.back()!='['){
                str.push_back(result.back());
                result.pop_back();
            }

            //resversing the str
            reverse(str.begin(), str.end());

            //remove last char from result which is [
            result.pop_back();

            //extract num from result
            string num = "";
            while(!result.empty() && (result.back()>='0' && result.back()<='9')){
                num.push_back(result.back());
                result.pop_back();
            }

            //reversing the num string
            reverse(num.begin(),num.end());

            //convert string to integer (STOI method)
            int int_num = stoi(num); 

            //inserting str in result int_num times
            while(int_num){
                result+=str;
                int_num--;
            }
        }
    }
    return result;
}

/************************************************ Third Approach *********************************************************
 
    T.C. : O(n), where n is the length of the input string s.

    S.C.: O(n), This is because the stack can potentially store all characters of the input string, 
            leading to linear space usage.
*/
class Solution {
public:

    string decodeString(string s) {
        stack<char> st;
        for(int i = 0; i < s.size(); i++){
            if(s[i] != ']') {
                st.push(s[i]);
            }
            else{
                string curr_str = "";
                
                while(st.top() != '['){
                    curr_str = st.top() + curr_str ;
                    st.pop();
                }
                
                st.pop();   // for '['
                string number = "";
                
                // for calculating number
                
                while(!st.empty() && isdigit(st.top())){
                    number = st.top() + number;
                    st.pop();
                }
                int k_time = stoi(number);    // convert string to number
                
                while(k_time--){
                    for(int p = 0; p < curr_str.size() ; p++)
                        st.push(curr_str[p]);
                }
            }
        }
        
        s = "";
        while(!st.empty()){
            s = st.top() + s;
            st.pop();
        }
        return s;
        
    }
};