class Solution {
public:
    int missingNumber(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            while(nums[i] != i && nums[i] < nums.size()){
                int tmp = nums[i];
                nums[i] = nums[nums[i]];
                nums[tmp] = tmp;
            }
        }
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != i) return i;
        }
        return nums.size();
    }
};