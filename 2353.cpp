class FoodRatings {
public:
    map<string,vector<string>>m1;
    map<string,int>c;
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        int n=cuisines.size();
        for(int i=0;i<n;i++)
        {
            m1[cuisines[i]].push_back(foods[i]);            
            c[foods[i]]=ratings[i];
        }
    }
    
    void changeRating(string food, int newRating) {
        c[food]=newRating;
    }
    
    string highestRated(string cuisine) {
        string ans;
        int n=m1[cuisine].size();
        // cout<<cuisine<<"   ";
        for(int i=0;i<n;i++)
        {
            // cout<<"("<<m1[cuisine][i]<<","<<c[m1[cuisine][i]]<<")"<<" ";
            if(i==0)
                ans=m1[cuisine][i];
            else
            {
                if(c[m1[cuisine][i]]>c[ans])
                    ans=m1[cuisine][i];
                else if(c[m1[cuisine][i]]==c[ans]&&ans>m1[cuisine][i])
                    ans=m1[cuisine][i];
            }            
        }
        // cout<<endl;
        return ans;
    } 
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating=-u-
 * string param_2 = obj->highestRated(cuisine);
 */
