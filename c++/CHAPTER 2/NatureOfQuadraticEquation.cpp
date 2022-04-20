#include<iostream>
#include<cmath>

using namespace std;

typedef int coefficient;
typedef int roots;

int main(){

    coefficient a,b,c;
    cout<<"Enter the coefficients: ";
    cin>>a>>b>>c;

    int d=(pow(b,2)-4*a*c);

    roots r1,r2;
    r1=(-b + sqrt(d))/(2*a);
    r2=(-b - sqrt(d))/(2*a);
    
    if(d==0){
        cout<<"Real and equal roots"<<endl;
        cout<<-b/(2*a);
    } 
    else if(d>0){
        cout<<"Real and distinct roots."<<endl;
        cout<<r1<<endl;
        cout<<r2<<endl;
    }
    else{
        cout<<"Complex roots."<<endl;
    }

    return 0;
}