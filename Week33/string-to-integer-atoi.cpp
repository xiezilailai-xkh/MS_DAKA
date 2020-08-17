class Solution {
public:
    int myAtoi(string str) {
        long ans = 0;
        int flag = 1;
        int first = 0;
        for(char c: str){
            if(!first&&c==' ')continue;
            if(first == 0&&(c=='+'||c=='-')){
                flag = (c== '+' ? 1:-1);
                first = 1;
            }else{
                if(first == 0)first = 1;
                if(c >= '0' && c <= '9'){
                    ans = ans * 10 + (c-'0');
                    if(ans - 1> INT_MAX)break;
                }else{
                    break;
                }
            }
        }
        ans *= flag;
        if(ans > INT_MAX)return INT_MAX;
        if(ans < INT_MIN)return INT_MIN;
        return ans;
        
    }
};