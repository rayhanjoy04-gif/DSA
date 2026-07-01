#include<iostream>
using namespace std;
int main()
{
    int x;
    for(int i=0;i<5;i++)
    {
       cin>>x;
    }
    cout<<endl;
    int count=0;
    for(int i=0;i<5;i++)
    {
        if(x>0)
        {
            count++;
        }
    }
    cout<<count<<" valores pares";
   return 0;
}