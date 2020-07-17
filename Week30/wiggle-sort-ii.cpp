class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        if(nums.size()<2)return;
        sort(nums.begin(), nums.end());
        vector<int> ans;
        int left = nums.size()%2==0?nums.size()/2-1:nums.size()/2;
        int right = nums.size()-1;
        while(left >= 0 || right >= (nums.size()%2==0?nums.size() / 2:nums.size() / 2+1)){
            if(left >= 0)
            ans.push_back(nums[left]);
            if(right >= (nums.size()%2==0?nums.size() / 2:nums.size() / 2+1))
            ans.push_back(nums[right]);
            left --;
            right --;
        }
        nums = ans;
    }
};