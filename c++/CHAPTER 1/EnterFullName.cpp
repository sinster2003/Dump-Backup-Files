#include<iostream>

using namespace std;

int main(){

    string name;

    cout<<"May I know your good name?"<<endl;

    getline(cin,name);

    cout<<"Hello "<<name<<",Welcome to the world of programming."<<endl;

    return 0;
}