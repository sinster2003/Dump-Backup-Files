#include<iostream>

using namespace std;

typedef int num;

int main(){

    num x;
    cout<<"Enter a number: "<<endl;
    cin>>x;

    if(x%2==0){
        cout<<x<<" is even."<<endl;
    }
    else{
        cout<<x<<" is odd."<<endl;
    }
    
    return 0;
}