#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    int n,i,count=0;
    cin>>n;
    cin>>s;

    for(i=1;i<s.size();i++)
    {
        if(s[i]==s[i-1])
        count++;
    }

    cout<<count<<endl;
    return 0;
}