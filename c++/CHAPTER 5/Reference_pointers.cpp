#include<iostream>

using namespace std;

int main()
{

    int x;
    x=10;

    int &y=x; //referencing giving the location of x to y
    // it becomes an alias of x;

    cout<<x<<endl;
    cout<<y<<endl;
    // x=y by sharing location...:)

    return 0;
}