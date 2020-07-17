class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int>sum;
        for(int i = 0, tmp = 0; i < nums.size(); i++){
            tmp += nums[i];
            sum.push_back(tmp);
        }
        vector<int> res;
        for(int i = nums.size()-1, tmp = 0; i >=0; i--){
            tmp += nums[i];
            res.push_back(nums[i]);
            if(i > 0 && sum[i-1] < tmp){
                break;
            }
            
        }
        return res;
    }
};