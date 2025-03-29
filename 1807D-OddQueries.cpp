#include<iostream> 
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        int ar[n];
        int i,j;
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
            if(i)
            ar[i]=ar[i]+ar[i-1];
        }
        long long int sum=0;
        
        while(q--)
        {
            long long int l,r,k;
            cin>>l>>r>>k;

            if(l>1)
            sum=ar[r-1]-ar[l-2];
            else
            sum=ar[r-1];

            long long int result=ar[n-1]-sum+k*(r-l+1);
            
            cout<<result<<endl;
            if(result%2==0)
            cout<<"NO"<<endl;
            else
            cout<<"YES"<<endl;
        }
    }

    return 0;
}