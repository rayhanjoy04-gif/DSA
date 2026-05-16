#include<iostream>
#include<vector>
using namespace std;
class Solution
{
    public:
    int SEISA(vector<int>&A)
    {
        if(A.size()==1)
        {
            return A[0];
        }
        int st=0,end=A.size()-1;
        while(st<=end)
        {
            int mid=st+(end-st)/2;
            if(mid==0&&A[0]!=A[1])
            {return A[mid];}
            if(mid==A.size()-1&&A[A.size()-1]!=A[A.size()-2])
            {return A[mid];}
            if(A[mid-1]!=A[mid]&&A[mid]!=A[mid+1])
            if(mid%2==0)
            {
              if(A[mid-1]==A[mid])
              {end=mid-1;}
              else
              {st=mid+1;}
            }
            else
            {
                if(A[mid-1]==A[mid])
                {end=mid-1;}
                else
                {st=mid+1;}
            }
        }
        return -1;
    }
};
int main()
{
    Solution ob;
    vector<int>A={1,2,3,4,5,1,2,3,4,5,6,3};
    cout<<ob.SEISA(A)<<" ";
    return 0;
}