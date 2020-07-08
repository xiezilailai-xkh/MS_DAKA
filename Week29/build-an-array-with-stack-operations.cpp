class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> res;
        stack<int> s;
        int idx = 1;
        for(int i = 0; i < target.size(); i++){
            while(target[i]!=idx){
                res.push_back("Push");
                res.push_back("Pop");
                idx++;
            }
            if(target[i]==idx){
                res.push_back("Push");
                idx++;
            }
            
        }
        return res;
    }
};