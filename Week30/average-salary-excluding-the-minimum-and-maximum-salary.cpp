class Solution {
public:
    double average(vector<int>& salary) {
        int ans = 0;
        sort(salary.begin(), salary.end());
        for(int i = 1; i < salary.size()-1; i++){
            ans += salary[i];
        }
        return ans * 1.0 / (salary.size()-2);
    }
};