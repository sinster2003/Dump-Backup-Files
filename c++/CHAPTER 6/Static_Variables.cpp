#include<iostream>

using namespace std;

//static variable = global variable except it can only be used by a function.
//static variable are stored in code section just like global variable.

void fun()
{
    static int x=0;
    x++;
    cout<<x<<endl;
}

int main()
{    
    // if you observe clearly x will stay in the memory and keeps changing
    // if x is not a tatic variable outcome is 1 1 1.
    
    fun();
    fun();
    fun();

    return 0;
}