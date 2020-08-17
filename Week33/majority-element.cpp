class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int current = nums[0];
        int f = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != current){
                f --;
                if(f == 0){
                    current = nums[i];
                    f = 1;
                }
            }else{
                f ++;
            }
        }
        return current;
    }
};