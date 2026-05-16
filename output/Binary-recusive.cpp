#include<iostream>
#include<vector>
using namespace std;
int RBC(vector<int>arr,int target,int st,int end)
{
    if(st<=end)
    {
        int mid=((st+end)/2);
        if(target>arr[mid])
        {
            return RBC(arr,target,mid+1,end);
        }
        else if(target<arr[mid])
        {
            return RBC(arr,target,st,mid-1);
        }
        else
        {
            return mid;
        }
    }
    return -1;
}
int main()
{
    vector<int>arr1={-1,0,3,4,5,9,12};
    int target1=9;
    cout<<RBC(arr1,target1,0,arr1.size()-1)<<endl;
    vector<int>arr2={-1,0,3,4,5,9,12};
    int target2=0;
    cout<<RBC(arr2,target2,0,arr2.size()-1)<<endl;
    return 0;

}