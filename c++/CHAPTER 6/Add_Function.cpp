#include<iostream>

using namespace std;

int Add(int x,int y)
{   
    int z;
    z=x+y;
    return z;
}

int main()
{

    int x = Add(10,5);
    cout<<x<<endl;

    return 0;
}