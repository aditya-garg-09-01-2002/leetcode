class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        map<int,vector<int>>m,m2;
        for(int i=0;i<trust.size();i++)
        {
            m[trust[i][1]].push_back(trust[i][0]);
            m2[trust[i][0]].push_back(trust[i][1]);
        }
        for(int i=1;i<=n;i++)
        {
            if(m[i].size()==n-1)
            {
                if(m2[i].size()==0)
                    return i;
                else
                    return -1;
            }
        }
        return -1;
    }
};
