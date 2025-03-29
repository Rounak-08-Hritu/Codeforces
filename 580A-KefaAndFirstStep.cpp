#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    int current=1,ans=0;

    for(int i=1;i<n;i++)
    {
        if(ar[i]>=ar[i-1])
        current++;
        else
        current=1;

        if(current>ans)
        ans=current;
    }
    if(current>ans)
    ans=current;


    cout<<ans<<endl;

    return 0;

}