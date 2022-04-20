#include<iostream>

using namespace std;

int main(){

    int A[]={1,2,3,4,5,6,7,8,9,10};

    for(int x:A){   // x takes a copy of element but if & is used then the element is permanently changed.
        cout<<++x<<endl;
    }
    cout<<"New:"<<A[9];

    return 0;
}