class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> sta;
        sta.push(s[0]);
        int i = 1;
        string ans = "";
        string tmp = "(";
        while(i < s.length()){
            if(s[i]==')'){
                if(sta.top()=='('){
                    sta.pop();
                    tmp += ")";
                }
            }else{
                sta.push('(');
                tmp += '(';
            }
            i++;
            if(sta.empty()){
                
                tmp = tmp.substr(1, tmp.length()-1);
                tmp = tmp.substr(0, tmp.length()-1);
                ans += tmp;
                tmp = "";
            }
        }
        return ans;
    }
};