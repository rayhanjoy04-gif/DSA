#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec={1,2,3,4,5};
    vec.clear();
    for(int val:vec)
    {
        cout<<val<<" ";
    }
    cout<<"size "<<vec.size()<<endl;
    cout<<"capacity "<<vec.capacity()<<endl;
    cout<<"empty "<<vec.empty()<<endl;
   return 0;
}