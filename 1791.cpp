#include <bits/stdc++.h>

using namespace std;

int findCenter(vector<vector<int>>&edges)
{
    map<int,vector<int>>m;
        for(int i=0;i<edges.size();i++)
        {
            m[edges[i][0]].push_back(edges[i][1]);
            m[edges[i][1]].push_back(edges[i][0]);
        }
        for(int i=1;i<=edges.size()+1;i++)
        {
            if(m[i].size()==edges.size())
                return i;
        }
        return -1;
}

int main() {
    int e;
    vector<vector<int>>v(e);
    cout<<findCenter(v);
}
