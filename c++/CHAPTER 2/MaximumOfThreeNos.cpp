#include<iostream>

using namespace std;

typedef int num;

int main(){

    num a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;

    if(a>b && a>c){
        cout<<"Max: "<<a;
    }
    else if(b>a && b>c){
        cout<<"Max: "<<b;
    }
    else{
        cout<<"Max: "<<c;
    }

    return 0;
}