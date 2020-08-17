class Solution {
public:
    string reverseWords(string s) {
        while(s.length()&&s[0]==' ') s = s.erase(0,1);
        while(s.length()&&s[s.length()-1]==' ') s = s.erase(s.length()-1, 1);
        
        int l = 0;
        int r = s.length() - 1;
        while(l <= r){
            swap(s[l++], s[r--]);
        }
        l = 0;
        while(l < s.length()){
            r = l;
            while(r+1 < s.length() && s[r+1] != ' '){r ++;}
            int tmp = r+1;
            while(l <= r) swap(s[l++], s[r--]);
            r = tmp;
            while(r+1 < s.length() && s[r+1] == ' ' ) s.erase(r+1, 1);
            l = r+1;
        }
        return s;
    }
};