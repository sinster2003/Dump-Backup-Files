#include<iostream>

using namespace std;

int main()
{
    //factorial of n number... 
    int n,factorial=1;
    cout<<"Enter n: ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        factorial*=i;
    }

    cout<<factorial<<endl;

    return 0;
}