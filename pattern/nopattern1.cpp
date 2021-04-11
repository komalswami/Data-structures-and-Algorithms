#include<iostream>
using namespace std;
int main()
{
    int row=5;
    for(int i=1;i<=row;i++)
    {
        for(int sp=i;sp<=row-1;sp++)
        {
            cout<<" ";
        }
        for(int j=1;j<=(2*i-1);j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
