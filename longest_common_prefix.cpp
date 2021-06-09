class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs[0].length();
        
        string op = "";
        bool match = true;
        for (int i = 0; i < n; i++){
            char c = (*strs.begin())[i];
            match = true;
            for (vector<string>::iterator it = strs.begin() +1 ; it != strs.end(); ++it){
                if (c != (*it)[i]){
                    match = false;
                    break;
                }
            }
            if (match){
                op += c;
            }
            else{
                break;
            }
        }
        return op;
    }
};