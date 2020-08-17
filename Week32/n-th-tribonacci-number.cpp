class Solution {
public:
    int tribonacci(int n) {
        int f[3];
        f[0] = 0;
        f[1] = 1;
        f[2] = 1;
        if(n <= 2)return f[n];
        for(int i = 0; i < n-2; i++){
            int ans = f[0] + f[1] + f[2];
            f[0] = f[1];
            f[1] = f[2];
            f[2] = ans;
        }
        return f[2];
    }
};