class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int result= 0;
        int len = nums.size();
        sort(nums.begin(),nums.end());
        for(int i = 0; i<len-1;i++){
            result += min(nums[i],nums[i+1]);
            i++;
        }
        return result;
        
    }
};
