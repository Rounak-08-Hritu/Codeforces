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

       int ar[n],freq[n];
        int i,j,count;
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
            freq[i]=-1;
        }

        for(i=0;i<n;i++)
        {
            count=1;
            for(j=i+1;j<n;j++)
            {
                if(ar[i]==ar[j])
                {
                count++;
                freq[j]=0;
                }
                if(freq[i]!=0)
                {
                freq[i]=count;
                }
            }
            
        }

        count=0;

        for(i=0;i<n;i++)
        {
            if(freq[i]>2 && freq[i]<4)
            count++;
            else
            count=count+(freq[i]/3);
        }

        cout<<count<<endl;
    }

    return 0;
}