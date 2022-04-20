#include<iostream>

using namespace std;

typedef int number;

int main(){

    number n1,n2;
    
    cout<<"Enter two numbers: "<<endl;
    cin>>n1>>n2;

    if(n1>n2){
        cout<<n1<<" is maximum of two numbers entered"<<endl;
    }
    else if(n1<n2){
        cout<<n2<<" is maximum of two numbers entered"<<endl;
    }
    else{
        cout<<"Both are equal or invalid number entered..."<<endl;
    }
 
    return 0;
}