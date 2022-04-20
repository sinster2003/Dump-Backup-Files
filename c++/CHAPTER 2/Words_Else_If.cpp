#include<iostream>

using namespace std;

int main(){

    int digit;
    cout<<"Enter the digit: ";
    cin>>digit;

    if(digit == 0){
        cout<<"Zero";
    }
    else if(digit == 1){
        cout<<"First";
    }
    else if(digit == 2){
        cout<<"Second";
    }
    else if(digit == 3){
        cout<<"Three";
    }
    else if(digit == 4){
        cout<<"Four";
    }
    else if(digit == 5){
        cout<<"Five";
    }
    else if(digit == 6){
        cout<<"Six";
    }
    else if(digit == 7){
        cout<<"Seven";
    }
    else if(digit == 8){
        cout<<"Eight";
    }
    else if(digit == 9){
        cout<<"Nine";
    }
    else{
        cout<<"Invalid digit";
    }

    return 0;
}