#include<iostream>

using namespace std;

int main(){
    int A[5]={1,2,3,4,5};
    int *p=A;
    int *q=&A[4];

    p++;
    cout<<*p<<endl;
    p--;
    cout<<*p<<endl;
    p=p+2;
    cout<<*p<<endl;
    p=p-2;
    cout<<*p<<endl;
    int d=q-p;
    cout<<d<<endl;
    
    return 0;
}