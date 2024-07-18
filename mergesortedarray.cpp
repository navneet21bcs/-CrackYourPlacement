class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int left=m-1;
        int right=0;
        while(left>=0 && right<=n-2)
        {
            if(nums1[left]>nums2[right])
            {
                swap(nums1[left],nums2[right]);
                left++,right--;
            }
            else
            {
                break;
            }
        }
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int>nums3(m+n);
        for(int i=0;i<m;i++)
        {
            nums3[i]=nums1[i];
        
        }
        for(int i=0;i<n;i++)
        {
            nums3[m+i-1]=nums2[i];
        
        }

    }
};
