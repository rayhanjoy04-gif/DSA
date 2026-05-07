#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec;
    cout<<"size="<<vec.size()<<endl;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    cout<<"Aftar push back="<<vec.size()<<endl;
    vec.front();
    vec.back();
    vec.pop_back();
    cout<<vec.at(1)<<endl;
   return 0;
}