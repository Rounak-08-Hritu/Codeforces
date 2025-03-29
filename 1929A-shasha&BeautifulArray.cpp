#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    sort(ar,ar+n);

    int sum=0;

    for(int i=n-1;i>0;i--)
    {
        sum+=(ar[i]-ar[i-1]);
    }
    cout<<sum<<endl;
    }
    return 0;
}