#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t,n=0;
    cin>>t;
     string str;
    while(t--)
    {
        cin>>str;
        if(str[1]=='+')
        n++;
        else
        n--;
       
    }
    cout<<n<<endl;
    return 0;
}