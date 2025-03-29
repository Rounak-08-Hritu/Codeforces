#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int  n;
    long double sum=0.00,ans;
    cin>>n;

    int p[n];

    for(int i=0;i<n;i++)
    {
        cin>>p[i];
        sum+=p[i];
    }
    ans=sum/n;
    cout<<fixed<<setprecision(12)<<ans<<endl;
    return 0;
}