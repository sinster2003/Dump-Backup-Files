#include<iostream>

using namespace std;
//this method wont work because call by value method works 
//only when the function returns the value but here the return type is void 
// so no result...:(
void swap(int a,int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{

    int x=10,y=20;
    swap(x,y);
    cout<<x<<" "<<y;

    return 0;
}