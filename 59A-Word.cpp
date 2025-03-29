#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int i,up=0,low=0;
    
    for(i=0;i<s.length();i++)
    {
        if(s[i]>=65 && s[i]<=90)
        up++;
    }
    low=s.length()-up;

    if(up<=low)
    {
        transform(s.begin(),s.end(),s.begin(), ::tolower);
        cout<<s<<endl;
    }
    else
    {
        transform(s.begin(),s.end(),s.begin(), ::toupper);
        cout<<s<<endl;
    }

    return 0;
}