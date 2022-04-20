#include<iostream>

using namespace std;

int main()
{
    int *p=new int[5];
    p[0]=5;
    p[3]=9;
    delete []p;
    p=new int[10];
    cout<<p[0]; 
    //gives garbage value memory stored in p=new int[5]
    //has been permnently deleted and new p has been allocated.
    
    return 0;
}