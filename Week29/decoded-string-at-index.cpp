class Solution {
public:
    
    string decodeAtIndex(string s, int k) {
        long long cnt = 0;
        for(char c: s){
            if(c >= '0' && c <= '9'){
                cnt *= (c-'0');
            }else{
                cnt ++;
            }
        }

        for(int i = s.length() - 1; i>= 0; i--){
            char c = s[i];
            k %= cnt;
            if(k==0 && (c>='a'&&c<='z')){
                string ss;
                return ss+c;
            }else if(c>='a'&&c<='z'){
                cnt -= 1;
            }else{
                cnt /= (c-'0');
            }
        }
        return "";
    }
};