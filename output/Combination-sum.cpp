#include<iostream>
#include<vector>
#include<set>
using namespace std;

class Solution
{
public:
    set<vector<int>> s;

    void getAllCominations(vector<int>& arr, int idx, int tar,
                           vector<vector<int>>& ans,
                           vector<int>& combin)
    {
        // target complete
        if(tar == 0)
        {
            if(s.find(combin) == s.end())
            {
                ans.push_back(combin);
                s.insert(combin);
            }
            return;
        }

        // out of bound or negative target
        if(idx == arr.size() || tar < 0)
        {
            return;
        }

        // take current element
        combin.push_back(arr[idx]);

        // single use
        getAllCominations(arr, idx + 1, tar - arr[idx], ans, combin);

        // multiple use
        getAllCominations(arr, idx, tar - arr[idx], ans, combin);

        combin.pop_back();

        // not take current element
        getAllCominations(arr, idx + 1, tar, ans, combin);
    }

    vector<vector<int>> combinationSum(vector<int>& arr, int tar)
    {
        vector<vector<int>> ans;
        vector<int> combin;

        getAllCominations(arr, 0, tar, ans, combin);

        return ans;
    }
};

int main()
{
    Solution obj;

    vector<int> arr = {2,3,6,7};
    int target = 7;

    vector<vector<int>> ans = obj.combinationSum(arr, target);

    for(auto v : ans)
    {
        cout << "[ ";
        for(int x : v)
        {
            cout << x << " ";
        }
        cout << "]\n";
    }

    return 0;
}