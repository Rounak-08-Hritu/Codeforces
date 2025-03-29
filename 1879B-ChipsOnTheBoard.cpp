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
        int a[n],b[n];

        long long int sum_a=0,sum_b=0;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];

            //sum_a+=a[i];
        }

        for(int i=0;i<n;i++)
        {
            cin>>b[i];

            //sum_b+=b[i];
        }

        sort(a,a+n);
        sort(b,b+n);

        for(int i=0;i<n;i++)
        {
            sum_a += b[0]+a[i];
        }

        for(int i=0;i<n;i++)
        {
            sum_b +=a[0]+b[i];
        }

        cout<<min(sum_a,sum_b)<<endl;;

        // long long int res1=n*a[0]+ sum_b;
//         long long int res2=n*b[0]+sum_a;
// 
//         cout<<min(res1,res2)<<endl;

    }
    return 0;
}