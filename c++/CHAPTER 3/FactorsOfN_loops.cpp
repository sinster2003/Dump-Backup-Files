#include<iostream>

using namespace std;

int main()
{   //program to find factors of a number...
    
    int n,sum=0;
    cout<<"Enter n: ";
    cin>>n;
    
    cout<<"Factors of "<<n<<" are: "<<endl;
    
    for(int i=1;i<=n;i++){
         if(n%i==0){
            cout<<i<<endl;
            sum+=i;
         }
    }
    cout<<"Sum of factors is "<<sum;
    
    return 0;
}