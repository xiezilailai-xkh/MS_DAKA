class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int>se;
        vector<string> res;
        if(s.length() < 10)return res;
        for(int i = 0; i < s.length()-9; i++){
            string tmp = s.substr(i, 10);
            if(se[tmp]==1){
                res.push_back(tmp);
            }
            se[tmp] ++;
        }
        return res;
    }
};