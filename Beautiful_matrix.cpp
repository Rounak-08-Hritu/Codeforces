#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int ar[5][5];
    int i,j,row,col;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        cin>>ar[i][j];
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(ar[i][j]==1)
            {
                row=i;
                col=j;
                break;
            }
        }
    }
    cout<<abs(2-row)+abs(2-col)<<endl;
    return 0;
}