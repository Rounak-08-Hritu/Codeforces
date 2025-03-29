#include<iostream>
#include<string>
using  namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int i,count=0;
        bool cnt=false;

        for(i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                count++;
            }
            
        }
       
       if(count>2 && count %2==0)
       cout<<"YES"<<endl;
       else if(count>2 && count%2==1)
       cout<<"NO"<<endl;
       else
       {
        if(s.find("11")!= string::npos)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
       }
    }
    return 0;
}