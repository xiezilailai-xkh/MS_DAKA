class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left = 0;
        int cur = 0;
        int right = nums.size() - 1;
        
        int tmp = 0;
        while(cur <= right){
            if(nums[cur] == 0){
                swap(nums[left++], nums[cur++]);
            }else if(nums[cur] == 1){
                cur ++;
            }else{
                swap(nums[right--], nums[cur]);
            }
        }
        
    }
};