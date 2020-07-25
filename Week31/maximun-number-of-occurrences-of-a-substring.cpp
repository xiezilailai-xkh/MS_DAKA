class Solution {
public:
    int maxFreq(string s, int maxLetters, int size){
        int cnt = 0;
        unordered_map<char, int> m;
        unordered_map<string, int> record;
        int l = 0;
        int ans = 0;
        for(int r = 0; r < s.length(); r++){
            if(m[s[r]]++==0)cnt ++;
            if(r >= size){
                if(--m[s[l]]==0)cnt --;
                l ++;
            }
            if(r >= size -1 && cnt <= maxLetters)
                ans = max(ans, ++record[s.substr(l, r-l+1)]);
        }
        return ans;
    }
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        int ans = 0;
        //for(int i = minSize; i <= maxSize; i++){
            ans = max(ans, maxFreq(s, maxLetters, minSize));
        //}
        return ans;
    }
};