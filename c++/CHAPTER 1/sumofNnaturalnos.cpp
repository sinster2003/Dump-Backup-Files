#include<iostream>

using namespace std;

int main(){

    int n=0,sum=0;

    cout<<"Enter the value of n: "<<endl;
    cin>>n;

    sum=n*(n+1)/2;

    cout<<"The sum of "<<n<<" natural numbers is: "<<sum;

    return 0;
}