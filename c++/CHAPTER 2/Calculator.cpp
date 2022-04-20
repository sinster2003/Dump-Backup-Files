#include<iostream>

using namespace std;

typedef int num;

int main(){

    num x,y;
    char op;
    
    cout<<"Enter the first number: ";
    cin>>x;
    cout<<"Enter the operation: ";
    cin>>op;
    cout<<"Enter the second number: ";
    cin>>y;

    switch(op)
    {
        case '+':
            cout<<x + y;
            break;
        case '-':
            cout<<x - y;
            break;
        case '*':
            cout<<x * y;
            break;
        case '/':
            cout<<x/y;
            break;
        default:
            cout<<"Invalid Operation.";\
            break;
    }

    return 0;
}