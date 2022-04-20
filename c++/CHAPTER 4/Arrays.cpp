#include<iostream>

using namespace std;

int main()
{
    string Players[4]={"Rohit","Rahul","Virat","Surya"};

    for(int i=0;i<4;i++)
    {
        cout<<i+1<<"."<<Players[i]<<endl;
    }

    return 0;
}