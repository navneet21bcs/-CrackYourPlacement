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
//Optimal soln in O(n)
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        int sum=0;
        int res=0;
        mp[0]=1;
        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];
            int rem=sum%k;
            if(rem<0)
            {
                rem=rem+k;
            }
            if(mp.find(rem)!=mp.end())
            {
                res=res+mp[rem];
            }
            mp[rem]++;
        }
        return res;
    }
};
