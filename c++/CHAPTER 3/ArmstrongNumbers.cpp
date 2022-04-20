#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int n,LastDigit,sum=0,OriginalNumber;
    cout<<"Enter n: ";
    cin>>n;
    OriginalNumber=n;

    while(n!=0){
        LastDigit=n%10;
        n/=10;
        sum+=pow(LastDigit,3);
    }

    if(sum==OriginalNumber){
        cout<<OriginalNumber<<" is an armstrong number.";
    }
    else{
        cout<<OriginalNumber<<" is not an armstrong number.";
    }

    return 0;
}