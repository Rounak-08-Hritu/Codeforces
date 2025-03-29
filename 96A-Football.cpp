#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int i,zeroes_count=0,ones_count=0;

    for(i=0;i<s.size();i++)
    {
        if(s[i]=='0')
        {
            zeroes_count++;
            ones_count=0;
            if(zeroes_count==7)
            {
                break;
            }
        }
        else
        {
            ones_count++;
            zeroes_count=0;
            if(ones_count==7)
            {
                break;
            }

        }
    }

    if(zeroes_count==7 || ones_count==7)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

    return 0;
}