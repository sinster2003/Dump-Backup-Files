#include<iostream>

using namespace std;

int main(){

    int n,LastDigit;
    cout<<"Enter n: ";
    cin>>n;

    for(int i=0;n!=0;i++)
    {
        LastDigit=n%10;
        n/=10;
        cout<<LastDigit<<endl;

    }

    return 0;
}