#include<iostream>

using namespace std;

int main(){

    int A[5];

    cout<<"Enter the numbers in an array: ";
    
    for(int i=0;i<5;i++){
        cin>>A[i];
    }

    int max=A[0]; //assuming

    for(int i=0;i<5;i++){
        if(A[i]>max){
            max=A[i];
        }
        else{
            continue;
        }
    }

    cout<<"The maximum is : "<<max;

    return 0;
}