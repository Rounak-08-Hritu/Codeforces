#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int flag=1;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
            if(!flag)
            {
            cout<<" ";
            flag=1;
            }
            i+=2;
        }
        else
        {
        cout<<s[i];
        flag=0;
        }
    }
    cout<<endl;
    return 0;
}