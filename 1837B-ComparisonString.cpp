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
        string s;
        cin>>s;
        int current=1,count=1;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]==s[i-1])
            current++;
            else
            current=1;

            if(current>count)
            count=current;
        }
        cout<<count+1<<endl;
    }
    return 0;
}