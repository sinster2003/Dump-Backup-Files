#include<iostream>

using namespace std;

int Maximum(int x,int y,int z)
{
    if(x>y && x>z){
        return x;
    }
    else if(y>z){
        return y;
    }
    else{
        return z;
    }
}

int main()
{

    int result = Maximum(12,45,23);
    cout<<result;

    return 0;
}