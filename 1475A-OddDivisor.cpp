#include<iostream>
using namespace std;

int main()
{
    long long int i,t;
    cin>>t;
    while(t--)
    {
        long long int n;
        int count=0;
        cin>>n;
        i=n;
        if( n%2==1)
        count++;
        else
        {
            while(i>2)
            {
                i/=2;
                if(i%2==1)
                {
                    if(n%i==0)
                    {
                     count++;
                      break;
                      }
                }
            }
        }
        if(count==0)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
    return 0;
}
