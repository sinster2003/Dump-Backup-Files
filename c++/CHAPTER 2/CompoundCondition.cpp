#include<iostream>

using namespace std;

int main(){
    //including two conditions together makes compound conditional statements...
    
    int hour;
    cout<<"Enter hour(24-hour format): "<<endl;
    cin>>hour;

    if(hour>=9 && hour<=18){
        cout<<"Working hour."<<endl;
    }
    else{
        cout<<"Leisure hour."<<endl;
    }

    return 0;
}