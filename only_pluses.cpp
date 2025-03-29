#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        for(int i=0;i<5;i++)
        {
            if(a>=b && a>=c)
            {
                if(b>=c)
                c++;
                else
                b++;
            }
            else if(b>=a && b>=c)
            {
                if(a>=c)
                c++;
                else
                a++;
            }
            else if(c>=a && c>=b)
            {
                if(a>=b)
                b++;
                else
                a++;
            }
            else
            a++;
        }
        cout<<a*b*c<<endl;
    }

    return 0;
}