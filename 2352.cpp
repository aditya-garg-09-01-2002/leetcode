#include <bits/stdc++.h>

using namespace std;

int equalPairs(vector<vector<int>>& grid)
{
    map<vector<int>,int>r,c;
    int n=grid.size();
    vector<vector<int>>ansr,ansc(n);
    for(int i=0;i<n;i++)
    {
        vector<int>rtemp,ctemp;
        for(int j=0;j<n;j++)
        {
            rtemp.push_back(grid[i][j]);
        }
        for(int j=0;j<n;j++)
        {
            ctemp.push_back(grid[j][i]);
        }
        if(r[rtemp]==0)
        ansr.push_back(rtemp);
        r[rtemp]++;
        c[ctemp]++;
    }
    int ans=0;
    for(int i=0;i<ansr.size();i++)
    {
        if(r[ansr[i]]!=0&&c[ansr[i]]!=0)
        {
            ans+=r[ansr[i]]*c[ansr[i]];
        }
    }
    return ans;
}

int main() {
    vector<vector<int>>grid(3);
    grid={{1,2,3},{1,2,3},{3,4,5}};
    cout<<equalPairs(grid);
}
