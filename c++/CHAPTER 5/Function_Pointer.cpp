#include<iostream>

using namespace std;

void display(){
    cout<<"Hello World!"<<endl;
}

int main()
{

    void(*fp)();
    fp=display;
    (*fp)();

    return 0;
}