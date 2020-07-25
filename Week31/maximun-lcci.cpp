class Solution {
public:
    int maximum(int a, int b) {
        int is_y = ((a >> 31 & 1) ^ (b >> 31 & 1));
        int ans = 0;
        int ans1 = (is_y & !(a >> 31&1)) * a ;
        int ans2 = (is_y & (a >> 31&1)) * b;
        int ans3 = ((!is_y) && !((a - b) >> 31 & 1)) * a;
        int ans4 = ((!is_y) && ((a - b) >> 31 & 1)) * b;
        ans = ans1|ans2|ans3|ans4;
        return ans;
    }
};