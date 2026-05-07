#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec;

    cout << "size = " << vec.size() << endl;

    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);

    cout << "After push back = " << vec.size() << endl;

    cout << "Front = " << vec.front() << endl;
    cout << "Back = " << vec.back() << endl;

    vec.pop_back();

    cout << "After pop_back :" << endl;

    cout << vec.at(1) << endl;

    return 0;
}