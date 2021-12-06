#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int freqp(string s)
{
    int count1[26] = {0};
    int count2[26] = {0};
    int n = s.length();
    if (n == 1)
        return 1;
    for (int i=0,j=n-1; i<j; i++,j--)
    {
        count1[s[i]-'a']++;
        count2[s[j]-'a']++;
    }
    for (int i = 0; i<26; i++)
        if (count1[i] != count2[i])
            return 0;
 
    return 1;
}

int main() {
    string s;
    cin>>s;
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        string s1;
        for(int i=a;i<=b;i++)
            s1+=s[i];
        int f=freqp(s1);
        if(f==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    
    return 0;
}
