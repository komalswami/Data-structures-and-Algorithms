#include<iostream>
using namespace std;

int main()
{
    int rows=5;
    for(int i=1;i<=5;i++)
    {
        for(int sp=i;sp<=rows-1;sp++)
        {
            cout<<" ";
        } 
        for(int j=1;j<=(2*i-1);j++)
        {
            if(j==1 || j==(2*i-1))
            {
                cout<<"*";
            }
        else
        {
            cout<<" ";
        }
        }
        cout<<endl;
    }
    int space=1;
    for(int i=rows-1;i>=1;i--)
    {
      
      for(int k=1;k<=space;k++)
      {
          cout<<" ";
      }
        for(int j=1;j<=(2*i-1);j++)
        {
           if(j==1 || j==(2*i-1))
           {
               cout<<"*";
           }
           else
           {
               cout<<" ";
           }
           
        }
        space++;
        cout<<endl;
}
}
