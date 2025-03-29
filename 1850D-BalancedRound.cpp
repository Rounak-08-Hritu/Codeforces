#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int ar[n];
        for(int i=0;i<n;i++)
        cin>>ar[i];

        sort(ar,ar+n);

        int current=1,count=0;

        for(int i=1;i<n;i++)
        {
            if(abs(ar[i]-ar[i-1])<=k)
            current++;
            else
            current=1;

            if(current>count)
            count=current;
        }

        if(current>count)
         count=current;
        cout<<n-count<<endl;
    }

    return 0;
}