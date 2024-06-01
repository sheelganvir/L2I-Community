class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int max=INT_MIN;
        stack<char>st;
        for(auto i:s)
        {
            if(i=='(')
            {
                st.push(i);
                count++;
            }
            if(i==')'){
                st.pop();
                count=st.size();
            }
            if(count>max)
            max=count; 
        }
        return max;
    }
};

/*
    TC: O(n)
    SC: O(n), because in the worst case scenario, we could have all opening brackets in the stack 
    before encountering any closing brackets, leading to a stack size of n.
*/