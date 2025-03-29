#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int m,n;
        cin>>n>>m;
        string s;
        cin>>s;
        string t;
        cin>>t;
        int i,validt=1,valids=1;

        for(i=1;i<m;i++)
        {
            if(t[i]==t[i-1])
            {
                validt=0;
                break;
            }

        }

        for(i=1;i<n;i++)
        {
            if(s[i]==s[i-1])
            {
                valids=0;
                break;
            }
        }
        

        if(valids==1)
        cout<<"Yes"<<endl;
        else if(!validt)
        cout<<"No"<<endl;
        else
        {
            int test=1;
            for(int i=1;i<n;i++)
            {
                if(s[i]==s[i-1])
                {
                    if(s[i-1]!=t[0]&&s[i]!=t[m-1])
                    test=1;
                    else
                    {
                        test=0;
                        break;
                    }
                }
            }
            if(test)
            cout<<"Yes"<<endl;
            else
            cout<<"No"<<endl;
        }
    
    }
    return 0;
}