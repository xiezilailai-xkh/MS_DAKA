class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        vector<int> minn;
        int tmp = 0x7fffffff;
        for(int num: nums){
            tmp = min(tmp, num);
            minn.push_back(tmp);
        }

        stack<int> s;
        for(int i = nums.size()-1; i >= 0; i--){
            if(nums[i] <= minn[i])continue;
            while(s.size()>0&&s.top()<=nums[i]){
                if(s.size()>0&&s.top()<nums[i]&&s.top()>minn[i])return true;
                s.pop();
            }
            
            s.push(nums[i]);
            
        }
        return false;
    }
};