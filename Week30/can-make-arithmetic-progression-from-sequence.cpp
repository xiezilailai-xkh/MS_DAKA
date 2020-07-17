class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        for(int i = 1, offset = 0; i < arr.size(); i++){
            if(i == 1)offset = arr[i]-arr[i-1];
            else if(arr[i]-arr[i-1]!=offset) return false;
        }
        return true;
    }
};