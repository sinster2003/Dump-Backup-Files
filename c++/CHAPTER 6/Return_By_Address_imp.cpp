#include<iostream>

using namespace std;
// A pointer points to the array created in the heap memory
// and returns it and then can be accessed by main function. 
// Only adress of the heap memory can be returned as it cannot be lost.
// address of local variables (stack memory) cannot be returned;

int* fun()
{
    int *p=new int[5];
    for(int i=0;i<5;i++)
    {
        p[i]=i+1;
    }
    return p;
}
int main()
{

    int *ptr=fun();
    cout<<ptr[0];

    return 0;
}