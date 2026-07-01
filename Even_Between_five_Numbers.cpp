#include<iostream>
using namespace std;

int main()
{
    int x;
    int count = 0;

    for(int i = 0; i < 5; i++)
    {
        cin >> x;

        if(x % 2 == 0)
        {
            count++;
        }
    }

    cout << count << " valores pares" << endl;

    return 0;
}