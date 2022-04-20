#include<iostream>
#include<cmath>

using namespace std;

int main(){

    double v,u,a,s;

    cout<<"Enter the values of v,u and a respectively: "<<endl;
    cin>>v>>u>>a;

    s = (pow(v,2)-pow(u,2))/(2*a);

    cout<<"The displacement of the object is: "<<s<<"m"<<endl;

    return 0;
}