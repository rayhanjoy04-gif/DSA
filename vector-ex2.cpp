#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec={1,2,3,4,5};
    vec.erase(vec.begin()+3);
    //vec.erase(vec.end());
    for(int val:vec)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    vec.insert(vec.begin()+3,90);
     for(int val:vec)
    {
        cout<<val<<" ";
    }

   return 0;
}