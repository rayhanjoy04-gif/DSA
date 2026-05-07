#include<iostream>
using namespace std;

bool isprime(int N)
{
    if(N <= 1)
    {
        return false;
    }

    for(int i = 2; i * i <= N; i++)
    {
        if(N % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int N;
    cin >> N;

    if(isprime(N))
        cout << "Prime";
    else
        cout << "Not Prime";

    return 0;
}