#include<iostream>
#include<vector>
using namespace std;
class solution{
    public:
    int signum(vector<int>&num)
    {
        int ans=0;
        for(int val:num)
        {
            ans^=val;
        }
        return ans;
    }
};
int main()
{
    solution();
}