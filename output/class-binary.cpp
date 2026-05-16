#include<iostream>
#include<vector>
using namespace std;
class Solution 
{
    public:
    int search(vector<int>arr,int target)
    {
        int st=0,end=arr.size()-1;
        while(st<=end)
        {
            int mid=st+(end-st)/2;
            if(target==arr[mid])
            {
                return mid;
            }
            if(arr[st]<=arr[mid])//left sort;
            {
                if(arr[st]<=target&&target<=arr[mid])
                {
                    end=mid-1;
                }
                else
                {
                    st=mid+1;
                }
            }
            else
            {
                if(arr[mid]<=target&&target<=arr[end])//right sort;
                {
                    st=mid+1;
                }
                else
                {
                    end=mid-1;
                }
            }
        }
        return -1;
    }
};
int main()
{
    Solution ob;
    vector<int>arr={1,2,3,4,5,6,7,8,9};
    int target=7;
    cout<<ob.search(arr,target)<<endl;
    return 0;
}