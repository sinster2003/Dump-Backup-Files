#include<iostream>

using namespace std;

int main(){

    int n,pro=1;

    cout<<"Enter the value of n: "<<endl;
    cin>>n;

    for(int i=n;i>0;i--){
        pro*=i; //compound assignment...
    }

    cout<<"The factorial of "<<n<<" is "<<pro<<endl;

    return 0;
}