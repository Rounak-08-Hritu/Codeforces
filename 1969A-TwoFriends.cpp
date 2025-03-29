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
        int i;
        bool count=false;
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
        }

        for(i=0;i<n;i++)
        {
            int frnd=i+1;
            int bestfriend=ar[i];
            if(ar[bestfriend-1]==frnd)
            {
            count=true;
            }
        }
        if(count)
        cout<<"2"<<endl;
        else
        cout<<"3"<<endl;

    }
    return 0;
}