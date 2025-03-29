#include<iostream>
using namespace std;

int main()
{
    int n,h;
    cin>>n>>h;

    int ar[n];
    int i,count=0;

    for(i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]>h)
        count+=2;
        else
        count+=1;
    }
    cout<<count<<endl;
    return 0;
}