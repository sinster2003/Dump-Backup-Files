#include<iostream>
#include<cmath>

using namespace std;

int main(){

    double a,b,c,r1,r2;

    cout<<"Enter the values of a,b and c respectively: "<<endl;
    cin>>a>>b>>c;

    r1 = (-b + sqrt(pow(b,2)-4*a*c))/(2*a);
    r2 = (-b - sqrt(pow(b,2)-4*a*c))/(2*a);

    cout<<"The two roots are "<<r1<<" and "<<r2<<endl;

    return 0;
}