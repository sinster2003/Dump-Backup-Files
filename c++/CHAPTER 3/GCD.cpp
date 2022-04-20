#include<iostream>

using namespace std;

typedef int number;

int main(){
    //new approach....
    number n1,n2,div;
    cout<<"Enter two numbers: ";
    cin>>n1>>n2;

    while(n1!=n2){
        if(n1>n2){
            n1=n1-n2;
        }
        else if(n2>n1){
            n2=n2-n1;
        }
    }

    cout<<"GCD: "<<n1;

    return 0;
}