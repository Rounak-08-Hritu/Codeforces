#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long  int n,count=0;
   while( cin>>n)
   {
    long long int ar[n];
    long long int i,sum=0;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
        sum+=ar[i];
    }
    sum=sum/2;
    long long int ans=0;
    sort(ar,ar+n);

    for(i=n-1;i>=0;i--)
    {
        ans+=ar[i];
        count++;
        if(ans>sum)
        break;
    }
   }
    cout<<count<<endl;

    return 0;
}