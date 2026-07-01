#include<iostream>
using namespace std;
int main()
{
    int N,sum=0;
    cin>>N;
    while(N!=0)
    {
        int dig=N%10;
        sum=sum*10+dig;
        N=N/10;
    }
    cout<<sum<<endl;
   return 0;
}