#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;

        if(s=="()")
        {
            cout<<"NO"<<endl;
            continue;
        }

        string ans1="",ans2="";
        for(int i=0;i<s.size();i++)
        {
            ans1+="()";
            ans2+="(";
        }
        for(int i=0;i<s.size();i++)
        {
            ans2+=")";
        }
        cout<<"YES"<<endl;

        if(ans1.find(s)== -1)
        cout<<ans1<<endl;
        else
        cout<<ans2<<endl;

    }
   return 0; 
}