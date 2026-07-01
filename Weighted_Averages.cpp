#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int N;
    cin >> N;

    while(N--)
    {
        double a, b, c;
        cin >> a >> b >> c;

        double avg = (a * 2 + b * 3 + c * 5) / 10.0;

        cout << fixed << setprecision(1) << avg << endl;
    }

    return 0;
}