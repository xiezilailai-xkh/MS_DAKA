class Solution {
public:
    bool match(string s, string p){
        if(p == "")return true;
        if(s == "") return p == "";
        int s_p = 0;
        int p_p = 0;
        while(s_p < s.length() && p_p < p.length()){
            while(s_p < s.length()&&s[s_p]!=p[p_p]){
                s_p ++;
            }
            if(s_p == s.length()) return false;
            p_p ++;
            s_p ++;
        }
        return p_p == p.length();

    }
    string findLongestWord(string s, vector<string>& d) {
        sort(d.begin(), d.end(),[](string& a, string&b){
            if(a.length() != b.length()) return a.length() > b.length();
            return a < b;
        });
        for(string dd: d){
            //cout << dd << endl;
            if(match(s, dd))return dd;
        }
        return "";
    }
};