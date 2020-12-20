#include<iostream>
using namespace std;
int main()
{
    int arr[20]={4,3,2,1,6};
    int n=5;
    int j,temp;
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[min]>arr[j])
            {
            temp=arr[min];
            arr[min]=arr[j];
            arr[j]=temp;
            }
        }
        /*if(min!=i)
        {
            int temp=min;
            min=arr[j];
            arr[j]=temp;
        }*/
    }
    for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<" ";
    }
return 0;
}
