#include<iostream>
#include<climits>
#include<vector>

using namespace std;

class solution
{
public:

    int maxarrsum(vector<int>& num)
    {
        int currsum = 0;
        int maxsum = INT_MIN;

        for(int val : num)
        {
            currsum += val;

            maxsum = max(currsum, maxsum);

            if(currsum < 0)
            {
                currsum = 0;
            }
        }

        return maxsum;
    }
};

int main()
{
    vector<int> num = {1,2,3,4,5};

    solution ob;

    cout << "sum = " << ob.maxarrsum(num);

    return 0;
}