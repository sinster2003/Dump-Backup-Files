#include<iostream>

using namespace std;

int  main(){

    int i=5,y=0;

    y=++i; //result-->y=6.
    y=i++; //result-->y=5.
    cout<<y;

    return 0;
}