#include<iostream>

using namespace std;

int main(){

    int n,rev=0,Last_digit,Og;
    cout<<"Enter n: ";
    cin>>n;
    Og=n;

    while(n!=0)
    {
        Last_digit=n%10;
        n/=10;
        rev=rev*10+Last_digit;
    }

    if(rev==Og){
        cout<<Og<<" is a palindrom.";
    }
    else{
        cout<<Og<<" is not a palindrom.";
    }


    return 0;
}