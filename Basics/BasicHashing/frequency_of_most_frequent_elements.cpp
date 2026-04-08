class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        
        sort(nums.begin(), nums.end());

        int left = 0, right = 0;
        long total = 0, res = 0;

        while(right < nums.size()){
            total += nums[right];

            while(nums[right] * static_cast<long>(right-left+1) > total+k){
                total -= nums[left];
                left++;
            }

            res = max(res, static_cast<long>(right-left+1));
            right++;
        }
        return static_cast<int>(res);
    }
};