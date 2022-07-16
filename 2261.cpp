#include <bits/stdc++.h>

using namespace std;

int countDistinct(vector<int>& nums,int k, int p)
{
    int n=nums.size();
    int ans=0;
    map<vector<int>,int>m;
    for(int i=0;i<n;i++)
    {
        int count=0;
        vector<int>v;
        for(int j=i;j<n;j++)
        {
            v.push_back(nums[j]);
            if(nums[j]%p==0)
            count++;
            if(count<=k&&m[v]==0)
            {
                m[v]++;
                ans++;
            }
        }
    }
    return ans;
}

int main() {
    int n,k,p;
    cin>>n>>k>>p;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }   
    cout<<countDistinct(v,k,p);
}
