long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    long long mini=INT_MAX;
    sort(a.begin(),a.end());
    for(int i=0;i+m-1<n;i++)
    {
        long long d=a[i+m-1]-a[i];
        mini=min(d,mini);
    }
    return mini;
    }   
