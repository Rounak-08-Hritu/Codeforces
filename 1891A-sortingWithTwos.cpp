#include<iostream>
#include<math.h>
#include<cstdlib>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int ar[n+1];
    
        for(int i=1;i<=n;i++)
        {
            cin>>ar[i];
        }
        int i=1,index=1,valid=0;

        while(index<=n)
        {
            if(ar[index]>=ar[index+1])
            valid=1;
            else
            valid=0;

            index=pow(2,i)-1;
            i++;
        }

        if(!valid)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

    }

    return 0;
}