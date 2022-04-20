#include<iostream>

using namespace std;

int x=34; //--->global variable...can be accessed anywhere

void fun()
{
    int x=10;  //--->local variable...
    cout<<x<<endl;
}

int main()
{

    int x=12;
    cout<<x<<endl;
    fun();
    cout<<::x<<endl; //--->scope resolutin ::  

    return 0;
}