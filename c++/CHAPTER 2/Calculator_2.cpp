#include<iostream>

using namespace std;

int main(){

    cout<<"MENU"<<endl;
    cout<<"1.Add"<<endl<<"2.Sub"<<endl<<"3.Mul"<<endl<<"4.Div"<<endl;

    int option;
    cout<<"Enter your option:"<<endl;
    cin>>option;

    int x,y,z;
    cout<<"Enter two numbers: ";
    cin>>x>>y;

    switch(option)
    {
        case 1:
               z=x+y;
               break;
        case 2:
               z=x-y;
               break;
        case 3:
               z=x*y;
               break;
        case 4:
               z=x/y;
               break;
        default:
               cout<<"Invalid option.";
               break;
    }
    cout<<z<<endl;
    
    return 0;
}