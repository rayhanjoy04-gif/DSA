#include<iostream>
using namespace std;
class Solution
{
    public:
    double mypow(double x,int n)
    {
        long binfrom=n;
        double ans=1;
        while(binfrom>0)
        {
            if(binfrom%2==1)
            {
                ans*=x;
            }
            x*=x;
            binfrom/=2;
        }
        return ans;
    }
};
int main()
{
    Solution s;

    cout << s.mypow(2, 10) << endl;   // 1024
    cout << s.mypow(2, -2) << endl;   // 0.25

    return 0;
}