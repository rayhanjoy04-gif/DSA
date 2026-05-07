#include<iostream>
using namespace std;
void reversearray(int arr[],int sz);
int main()
{
    int A[]={1,2,3,4,5};
    int sz=5;
    reversearray(A,sz);
    for(int i=0;i<sz;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;

   return 0;
}
void reversearray(int arr[],int sz)
{
int start=0;
int end=sz-1;
while(start<end)
{
    swap(arr[start],arr[end]);
    start++;
    end--;

}
}
