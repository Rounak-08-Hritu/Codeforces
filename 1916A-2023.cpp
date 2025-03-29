#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve()
{
   
        int n,k,i;
        long long int product=1;
        cin>>n>>k;
        int b[n];

        for(i=0;i<n;i++)
        {
            cin>>b[i];
            product*=b[i];
        }

        if(2023%product==0)
        {
        cout<<"YES"<<endl;

        cout<<2023/product<<" ";

        for(i=0;i<k-1;i++)
        {
            cout<<"1"<<" ";
        }
        cout<<endl;
        }
        else
        cout<<"NO"<<endl; 
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       solve();
    }
    return 0;
}