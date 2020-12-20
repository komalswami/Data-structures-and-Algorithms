#include<iostream>
using namespace std;
int main()
{
    int arr[10]={8,6,7,4,3};
    int n=5;
    
    for(int i=1;i<n;i++)
    {
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && temp<arr[j])
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }

    for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<" ";
    } 
}