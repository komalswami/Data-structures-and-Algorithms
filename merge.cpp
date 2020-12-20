#include<iostream>
using namespace std;
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<" "<<arr[i];
}
void merge(int arr[],int lb,int mid,int ub)
{
int i=lb;
int j=mid+1;
int k=lb;
int b[10];
while(i<=mid && j<=ub){
if(arr[i]>arr[j])
{
b[k]=arr[j];
j++;
k++;
}
else
{
    b[k]=arr[i];
    i++;
    k++;
}
}
if(i>mid){
    while(j<=ub)
    {
        b[k]=arr[j];
        j++;
        k++;
    }}
    else{
        while (i<=mid)
        {
            b[k]=arr[i];
            i++;
            k++;
        }
        
    }
    for(int c=0;c<ub;c++)
    {
        arr[c]=b[c];
    }
    
}

void mergeSort(int arr[],int lb,int ub)
{
if(lb<ub){
int mid=(lb+ub)/2;
mergeSort(arr,lb,mid);
mergeSort(arr,mid+1,ub);
merge(arr,lb,mid,ub);
}
}
int main()
{
    int arr[10]={9,3,2,7};
    int n=4;
    display(arr,n);
    mergeSort(arr,0,4);
    cout<<endl;
    display(arr,n);
    return 0;
}