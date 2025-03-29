#include<iostream>
#include<cmath>
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

        int a[n],res[n],p[n];

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            res[i]=i+1;
            p[i]=abs(a[i]-res[i]);
        }

        int result=p[0];

        for(int i=1;i<n;i++)
        {
            result=__gcd(result,p[i]);
        }

        cout<<result<<endl;
    }
    return 0;
}