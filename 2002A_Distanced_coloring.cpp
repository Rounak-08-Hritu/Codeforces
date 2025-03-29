#include<iostream>
using namespace std;
int main()
{
    int n,m,k;
    int t;
    cin>>t;

    while(t--)
    {
        cin>>n>>m>>k;
        if(n>k && m>k)
        cout<<k*k<<endl;
        else if(n>k && m<=k)
        cout<<m*k<<endl;
        else if(n<=k && m>k)
        cout<<n*k<<endl;
        else
        cout<<m*n<<endl;

    }
    return 0;
}