#include<iostream>
#include<vector>
using namespace std;
class Solution
{
    public:
    int PIIMA(vector<int>&A)
    {
        int st=0,end=A.size()-1;
        while(st<end)
        {
            int mid=st+(end-st)/2;
            if(A[mid-1]<A[mid]&&A[mid]>A[mid+1])
            {
                return mid;
            }
            else if(A[mid-1]<A[mid])
            {
                st=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return -1;
    }
};

 int main()
{
    Solution s;

    vector<int> A = {1, 3, 5, 7, 6, 4, 2};

    cout << "Peak Index = " << s.PIIMA(A);

    return 0;
}