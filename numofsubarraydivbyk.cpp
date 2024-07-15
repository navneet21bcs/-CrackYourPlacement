//brute force
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
         int sum;
        int res = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i; j < nums.size(); j++) {
                sum = 0;
                for (int l = i; l <= j; l++) {
                    sum += nums[l];
                }
                if (sum % k == 0) {
                    res++;
                }
            }
        }
        return res;
    }
};
