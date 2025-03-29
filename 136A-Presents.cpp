#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n],res[n];
    int i,j;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
        res[ar[i]-1]=i+1;
    }

    for(i=0;i<n;i++)
    cout<<res[i]<<" ";

    cout<<endl;

    return 0;
}