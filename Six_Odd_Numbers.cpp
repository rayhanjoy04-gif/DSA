#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    if (x % 2 == 0)
    {
        x++; // make it odd
    }

    for (int i = 0; i < 6; i++)
    {
        cout << x << endl;
        x += 2;
    }

    return 0;
}