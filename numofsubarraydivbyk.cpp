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

Better Approach in O(n^2)
int subarraysDivByK(vector<int>& nums, int k) {
        
        int res = 0;
        int sum;
        //prefix sum
        for(int i=1;i<nums.size();i++)
        {
            nums[i]=nums[i]+nums[i-1];
        }
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i; j < nums.size(); j++) {
              if(i==0)
              sum=nums[j];
              else
              sum=nums[j]-nums[i-1];
              if(sum%k==0)
              res++;
            }     
        }
        return res;
    }
};
