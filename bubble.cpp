#include<iostream>
using namespace std;

int main()
{
    int arr[10]={8,6,7,4,3};
    int n=5;

    //bubble sort
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }   
        }
        cout<<"\n**********************************pass********************************"<<endl;
        for(int k=0;k<n;k++)
        cout<<arr[k]<<" ";
   }
   cout<<endl;
   cout<<"sorted array"<<endl;
   for(int c=0;c<n;c++)
        cout<<arr[c]<<" ";

}