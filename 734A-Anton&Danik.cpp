#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n,a=0,d;
    cin>>n;
    string s;
    cin>>s;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='A')
        a++;
    }
    d=n-a;

    if(d==a)
    cout<<"Friendship"<<endl;
    else if(d>a)
    cout<<"Danik"<<endl;
    else
    cout<<"Anton"<<endl;
    return 0;
}