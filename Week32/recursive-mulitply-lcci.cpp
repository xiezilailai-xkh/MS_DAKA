class Solution {
public:
    int dfs(int A, int B){
        if(B == 0) return 0;
        int ans = 0;
        if(B & 1) ans += A;
        int t = dfs(A, B>>1);
        ans += (t+t);
        return ans;
    }
    int multiply(int A, int B) {
        return A*B;
    }
};