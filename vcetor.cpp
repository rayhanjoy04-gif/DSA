#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<char>vec={'a','b','c','d','e'};
    for(char val:vec)
    {
        cout<<val<<" ";
    }cout<<endl;
    for(int fd:vec)
    {
        cout<<fd<<" ";
    }
   return 0;
}