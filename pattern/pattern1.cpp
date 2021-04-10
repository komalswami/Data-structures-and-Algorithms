#include<iostream>
using namespace std;
int main()
{
    int rows=5;
   // cin>>rows;
    for(int i=1;i<=rows;i++)
    {
        for(int sp=0;sp<rows-1;sp++)
        {
            cout<<" ";
        }
        for(int sp=i;sp<=rows-1;sp++)
        {
            cout<<" ";
        }
        for(int j=1;j<=(2*i-1);j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}