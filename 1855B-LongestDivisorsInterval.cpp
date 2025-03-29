#include<iostream>
using namespace std;
typedef long long ll;

int main(){

    int t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;

        ll count=1;

        for(ll p = 2; n % p == 0 && p <= n; p++)
        {
            count++;
        }
        cout<<count<<endl;
    }
    return 0;

}