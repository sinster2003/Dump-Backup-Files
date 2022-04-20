#include<iostream>

using namespace std;

// the solution for the problem of swapping is call by address method

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
// remember one thing: call by value only works in return type style not in void....
int main()
{
    int x=10,y=20;
    swap(&x,&y);
    cout<<x<<" "<<y;
    return 0;
}