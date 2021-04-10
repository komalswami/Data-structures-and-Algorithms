#include<iostream>
using namespace std;
int main()
{
    int rows=5;
    for(int i=1;i<=rows;i++)
    {
        for(int space=i;space<=(rows-1);space++)
        {
            cout<<" ";
        }
        for(int j=1;j<=(2*i-1);j++)
        {
            if(j==1 ||j==(2*i-1)){
            cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
    for(int k=0;k<(2*rows-1);k++)
    {
        cout<<"*";
    }
    cout<<endl;
    return 0;
}
