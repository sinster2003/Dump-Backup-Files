#include<iostream>

using namespace std;

int main(){

    int A[6]={2,-9,7,-6,-1,0};
    int p_count=0,n_count=0;

    for(int i=0;i<6;i++){
        if(A[i]>=0){
            p_count++;
        }
        else{
            n_count++;
        }
    }
    cout<<"Positive: "<<p_count<<endl;
    cout<<"Negative: "<<n_count;

    return 0;
}