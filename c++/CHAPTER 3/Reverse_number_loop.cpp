#include<iostream>

using namespace std;

int main(){

    int n,LastDigit,sum=0;
    cout<<"Enter n: ";
    cin>>n;

    cout<<"Reverse of a number: ";

    while(n!=0)
    {
        LastDigit=n%10;
        n/=10;
        sum=sum*10+LastDigit;
    }

    cout<<sum;

    return 0;
}