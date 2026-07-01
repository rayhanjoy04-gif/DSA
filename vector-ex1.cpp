#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec1={1,2,3,4,5};
    vector<int>vec2(vec1);//copy the vactor.
    for(int val:vec2)
    {
        cout<<val<<" ";
    }
   return 0;
}