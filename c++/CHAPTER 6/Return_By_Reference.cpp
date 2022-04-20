#include<iostream>

using namespace std;

// Return by reference:returns value or address of the loacal variable
// of the main function.
// &x=a...value of a is assigned to x and returned.
int& fun(int &x)
{
    return x;
}

int main()
{

    int a=10;
    fun(a)=25;
    cout<<a;
    return 0;
}