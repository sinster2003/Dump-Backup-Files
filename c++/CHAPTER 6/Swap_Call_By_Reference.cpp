#include<iostream>

using namespace std;
// call by reference use inline function method;
// i.e the swap function machine code and main function machine code will be same.

void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main()
{

    int x=10,y=20;
    swap(x,y);
    cout<<x<<" "<<y;

    return 0;
}