#include<iostream>

using namespace std;

// int add(int x,int y)
// {
//     return x+y;
// }

// int add(int x,int y,int z)
// {
//  return x+y+z;
// }

// instead do this

int add(int x,int y,int z=0) //z is a default value...
{
    return x+y+z;
}

int main()
{
    cout<<add(2,4,5)<<endl;


    return 0;
}