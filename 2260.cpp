map<int,int>m;
    int ans=-1;
    int n=cards.size();
    for(int i=0;i<n;i++)
    {
        if(m[cards[i]]==0)
        {
            m[cards[i]]=i+1;
        }
        else
        {
            if(ans==-1)
            {
                ans=i+1-m[cards[i]]+1;
                m[cards[i]]=i+1;
            }
            else
            {
                ans=min(i+1-m[cards[i]]+1,ans);
                m[cards[i]]=i+1;
            }
        }
    }
    return ans;
