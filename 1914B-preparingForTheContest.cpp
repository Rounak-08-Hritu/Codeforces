#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int k,n,i;
        cin>>n>>k;

        vector<int>v(n);

        for(i=0;i<n;i++)
        {
            v.push_back(i+1);
        }
        reverse(v.begin(),v.end());
        reverse(v.begin(),v.begin()+k+1);

        for(i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }

        cout<<endl;
    }

    return 0;
}