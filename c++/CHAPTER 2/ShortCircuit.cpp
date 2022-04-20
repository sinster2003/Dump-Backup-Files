#include<iostream>

using namespace std;

int main(){

    int a=5,b=7,i=5;

    if(a>b && ++i>b){
    //if one condition is false then the next condition is not checked
    //when && is used...
    }          

    cout<<i;

    return 0;
}