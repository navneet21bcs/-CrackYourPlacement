class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ct=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        { 
             int sum=0;
            for(int j=i;j<n;j++)
            {
               
                
                    sum=sum+nums[j];
                    if(sum==k)
                    {
                    ct++;
                    }
                }
            
        }
        return ct;
        
    }
};
//optimal soln
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ct=0;
        int n=nums.size();
       unordered_map<int,int>mp;
       mp[0]=1;
       int presum=0;q
       for(int i=0;i<n;i++)
       {
        presum=presum+nums[i];
        int remove=presum-k;
        ct=ct+mp[remove];
        mp[presum]++;
       }
        return ct;
    }
};
