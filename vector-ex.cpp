#include<iostream>
#include<vector>
using namespace std;
int main()
{
   vector<int>vec;
   vec.push_back(1);
   vec.push_back(2);
   vec.push_back(3);
   vec.emplace_back(6);
   vec.pop_back();
   for(int val:vec)
   {
    cout<<val<<" ";
   }
   cout<<endl;
   cout<<"val at idx 2 "<<vec[2]<<" or "<<vec.at(2)<<endl;
   cout<<"front "<<vec.front()<<endl;
   cout<<" back "<<vec.back()<<endl;
   return 0;
}