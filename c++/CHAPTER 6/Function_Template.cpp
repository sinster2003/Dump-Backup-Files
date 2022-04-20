#include<iostream>

using namespace std;

template<class T>

T maximum(T a,T b)
{
    return a>b?a:b;
}
int main()
{ 
    cout<<maximum(12,14)<<endl; 
    cout<<maximum(2.3,1.4)<<endl; 
    cout<<maximum(2.3f,5.6f)<<endl;

    return 0;
}