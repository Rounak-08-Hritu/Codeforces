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
        int n,k,i;
        char ch;
        cin>>n>>k;

        for(i=0;i<n;i++)
        {
            for(ch='a';ch<'a'+k;ch++)
            {
            s=s+ch;
            }

        }
        cout<<s<<endl;
    }


    return 0;
}