#include<iostream>
using namespace std;
void selectionsort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int smallindex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[smallindex])
            {
                smallindex=j;
            }
            swap(arr[i],arr[smallindex]);
        }
    }
}
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n=5;
    int arr[]={4,6,3,7,2};
    selectionsort(arr,n);
    printarray(arr,n);
   return 0;
}