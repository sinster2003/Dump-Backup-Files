#include<iostream>

using namespace std;

int main(){

    int A[]={2,4,5,6};
    int n=4;
    int sum=0;

    for(int i=0;i<n;i++)
    {
        sum=sum+A[i];
    }
    
    cout<<"Average: "<<sum/n;

    return 0;
}