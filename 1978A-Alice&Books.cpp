#include<iostream>
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
        int max=ar[0];

        for(int i=1;i<n-1;i++)
        {
           if(max<ar[i])
           max=ar[i];
        }
        cout<<max+ar[n-1]<<endl;
    
    }
    return 0;
}