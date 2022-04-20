#include<iostream>

using namespace std;

int main()
{
    int A[10];

    for(int i=0;i<10;i++){
        cin>>A[i];
    }

    int key;
    cout<<"Enter key: ";
    cin>>key;

    for(int i=0;i<10;i++){
        if(key==A[i]){
            cout<<"Found at "<<i;
            return 0;
        }
    }
    cout<<"Not Found";
    
    return 0;
}