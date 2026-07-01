#include<iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for(int i = 1; i <= N; i++)
    {
        int X;
        cin >> X;

        int count = 0;

        if(X <= 1)
        {
            cout << X << " nao eh primo" << endl;
            continue;
        }

        for(int j = 2; j < X; j++)
        {
            if(X % j == 0)
            {
                count++;
                break;
            }
        }

        if(count == 0)
        {
            cout << X << " eh primo" << endl;
        }
        else
        {
            cout << X << " nao eh primo" << endl;
        }
    }

    return 0;
}