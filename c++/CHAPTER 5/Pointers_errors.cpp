#include<iostream>
//Main three mistakes what programmers make:
//Unitialized pointers: so initialize the pointers if using.
//Memory leak: always delete the heap array
//Dangling pointer...

using namespace std;

int main(){

    int *p=new int[5];

    // lets assume a function 
    // f(int * q ){
        // lines of code
        // delete [q];
    // }

    // f(p);
    cout<<*p<<endl; //will be a dangling pointer as the function will delete the heap array
    // after the exection of code in the function block;

    return 0;
}