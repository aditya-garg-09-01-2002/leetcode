#include <bits/stdc++.h>

using namespace std;

char repeatedCharacter(string s)
{
    int a[26]={0};
    for(int i=0;i<s.length();i++)
    {
        a[s[i]-'a']++;
        if(a[s[i]-'a']==2)
        return s[i];
    }
    return 'a';
}

int main() {
    cout<<repeatedCharacter("abcsns");
}
