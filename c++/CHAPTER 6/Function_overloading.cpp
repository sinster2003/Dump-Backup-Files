#include<iostream>

using namespace std;

// function has same name but different arguments this is 
// function overloading.

int add(int x,int y)
{
    return x+y;
}

float add(float x,float y)
{
    return x+y;
}

int add(int x,int y,int z)
{
    return x+y+z;
}

int main()
{
    cout<<add(10,5)<<" ";
    cout<<add(5.3f,4.3f)<<" ";
    cout<<add(10,4,2);

    return 0;
}