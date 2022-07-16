#include <bits/stdc++.h>

using namespace std;

string removeDigit(string number,char digit)
{
    int n=number.length();
    string ans="";
    for(int i=0;i<n;i++)
    {
        if(number[i]==digit)
        {
            string temp=number;
            temp.erase(i,1);
            ans=max(ans,temp);
        }
    }
    return ans;
}

int main() {
    string number;
    char digit;
    cin>>number>>digit;
    cout<<removeDigit(number,digit);
}
