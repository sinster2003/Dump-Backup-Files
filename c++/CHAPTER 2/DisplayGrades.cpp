#include<iostream>

using namespace std;

typedef int marks;

int main(){

    marks m1,m2,m3;
    int total;
    
    cout<<"Enter the marks of three subjects: ";
    cin>>m1>>m2>>m3;
    total = (m1 + m2 + m3);
    float avg = total/3.0;

    cout<<total<<endl;
    cout<<avg<<endl;

    if(avg>=60){
        cout<<"A";
    }
    else if(avg>=35 && avg<60){
        cout<<"B";
    }
    else{
        cout<<"C";
    }

    return 0;
}