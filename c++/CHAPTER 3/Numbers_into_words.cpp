#include<iostream>

using namespace std;

int main(){

    int n,last,last_digit,rev=0;
    cout<<"Enter n: ";
    cin>>n;

    while(n!=0)    //or while(n!=0)
    {
        last=n%10;
        n/=10;
        rev=rev*10+last;
    }

    while(rev!=0)   
    {
        last_digit=rev%10;
        rev/=10;
        switch(last_digit){
            case 0:
                cout<<"zero"<<" ";
                break;
            case 1:
                cout<<"one"<<" ";
                break;
            case 2:
                cout<<"two"<<" ";
                break;
            case 3:
                cout<<"three"<<" ";
                break;
            case 4:
                cout<<"four"<<" ";
                break;
            case 5:
                cout<<"five"<<" ";
                break;
            case 6:
                cout<<"six"<<" ";
                break;
            case 7:
                cout<<"seven"<<" ";
                break;
            case 8:
                cout<<"eight"<<" ";
                break;
            case 9:
                cout<<"nine"<<" ";
                break;
        }
    }

    return 0;
}