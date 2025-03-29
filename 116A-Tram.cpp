#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];
    int i,capacity=0,a,b;

    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        capacity=capacity+b-a;
        ar[i]=capacity;
    }
    capacity=0;
    for(i=0;i<n;i++)
    {
        if(ar[i]>capacity)
        capacity=ar[i];
    }
    cout<<capacity<<endl;
    return 0;
}