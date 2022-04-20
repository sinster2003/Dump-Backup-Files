#include<iostream>

using namespace std;

int main(){

    double Total;
    cout<<"Enter the total amount: ";
    cin>>Total;

    if(Total<100){
        cout<<"Sorry No Discount."<<endl;
        cout<<"Total Bill: "<<Total<<"Thank you for Shopping.";
    }
    else if(Total>=100 && Total<500){
        cout<<"You get 10% discount."<<endl;
        cout<<"Total Bill: "<<Total - (Total * 10/100)<<endl<<"Thank you for Shopping.";
    }
    else{
        cout<<"You get 20% discount."<<endl;
        cout<<"Total Bill: "<<Total - (Total * 20/100)<<endl<<"Thank you for Shopping.";
    }

    return 0;
}