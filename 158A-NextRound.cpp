#include<iostream>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int ar[n];
    int i,ans=0;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }


    for(i=n-1;i>=0;i--)
    {
        if(ar[k-1]<=ar[i] && ar[i]>0)
        {
            ans=i+1;
            break;
        }
    }
  
    cout<<ans<<endl;

    return 0;
}