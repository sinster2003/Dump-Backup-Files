#include<iostream>

using namespace std;

int main()
{
    //sum of n numbers
    int n,sum=0;;
    cout<<"Enter n: ";
    cin>>n;

    for(int i=0;i<=n;i++){
        sum+=i;
    }

    cout<<sum<<endl;

    return 0;
}