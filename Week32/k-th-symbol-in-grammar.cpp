class Solution {
public:
    int dp(int N, int k){
        if(N == 0)return 0;
        if(N == 1) return k;
        int p = k & 1;
        int last = dp(N-1, k >> 1);
        if(last == 0){
            return p;
        }else{
            return 1-p;
        }
    }
    int kthGrammar(int N, int k) {
        return dp(N-1, k-1);
    }
};