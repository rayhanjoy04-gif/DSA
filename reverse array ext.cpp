#include<iostream>
using namespace std;
void reverse(int arr[],int sz)
{
    int st=0;
    int end=sz-1;
    while(st<end)
    {
        swap(arr[st],arr[end]);
        st++;
        end--;
    }


}
int main()
{
    int arr[]={3,4,5,6,7};
    int size=5;
    reverse(arr,size);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
   return 0;
}