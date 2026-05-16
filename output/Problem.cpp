#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while(T--)
    {
        string name;
        cin>>name;

        transform(name.begin(), name.end(), name.begin(), ::tolower);

        if(name == "yes")
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}