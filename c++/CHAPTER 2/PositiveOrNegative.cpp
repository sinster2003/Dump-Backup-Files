#include<iostream>

using namespace std;

typedef int num;

int main(){

    num x;
    
    cout<<"Enter a number: "<<endl;
    cin>>x;

    if(x<0){
        cout<<x<<" is negative."<<endl;
    }
    else{
        cout<<x<<" is positive."<<endl;
    }

    return 0;
}