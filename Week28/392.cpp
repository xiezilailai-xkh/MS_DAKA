class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(t=="")return s=="";
        if(s=="")return true;
        int s_p = 0;
        int t_p = 0;
        while(t_p < t.length()){
            if(t[t_p]==s[s_p]){
                t_p++;
                s_p++;
            }else{
                t_p++;
            }
            if(s_p==s.length())return true;
        }
        return false;
    }
};