class Solution {
public:
    int integerBreak(int n) {
        if(n == 2)return 1;
        if(n == 3)return 2;
        int ans = 1;
        while(n > 0){
            if(n == 4){
                ans *= 4;
                n -= 4;
            }else if(n >= 3){
                ans *= 3;
                n -= 3;
            }else{
                ans *= n;
                n = 0;
            }
        }
        return ans;
        
    }
};