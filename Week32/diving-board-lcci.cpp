class Solution {
public:
    vector<int> divingBoard(int shorter, int longer, int k) {
        int t = shorter * k;
        if(k == 0) return vector<int>();
        if(shorter == longer)return vector<int>({t});
        vector<int>ans;
        for(int i = 0; i <= k ; i++){
            ans.push_back(t);
            t += (longer - shorter);
        }
        return ans;
    }
};