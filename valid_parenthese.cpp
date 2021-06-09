class Solution {
public:
    bool isValid(string s) {
        stack<char> st; 
        if (s.length() == 0){
            return true;
        }
        if (s.length() % 2 != 0){
            return false;
        }
        
        for (int i = 0; i < s.length(); ++i){
            char c = s[i];
            if (c == '(' || c == '{' || c == '['){
                st.push(c);
            }
            else if (st.empty()){
                return false;
            }
            else{
                char tmp = st.top();
                if ((c == ')' && tmp != '(')){
                    return false;
                }
                if ((c == '}' && tmp != '{')){
                    return false;
                }
                if ((c == ']' && tmp != '[')){
                    return false;
                }
                else{
                    st.pop();
                }
            }
        }
        if (st.size() != 0){
            return false;
        }
        return true;
    }
};