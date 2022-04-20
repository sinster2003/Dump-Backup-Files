#include<iostream>

using namespace std;

int main(){

    double principle,rate,time,simple;

    cout<<"Enter the principle amount(Rs): "<<endl;
    cin>>principle;

    cout<<"Enter the rate of interest(%): "<<endl;
    cin>>rate;

    cout<<"Enter the time(Years): "<<endl;
    cin>>time;

    simple = principle*rate*time/100;

    cout<<"The simple interest is: "<<simple<<"Rs"<<endl;

    return 0;
}