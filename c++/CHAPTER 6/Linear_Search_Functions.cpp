#include<iostream>

using namespace std;

int* Array(int size)
{
    int *p=new int[size];
    return p;
}

int Linear_Search(int* ptr,int key,int size)
{
    int count;
    for(int i=0;i<size;i++)
    {
        if(ptr[i]==key)
        {
            count=i;
        }
        else
        {
            continue;
        }
    }

    return count;
    
}

int main()
{
    int size,key;
    
    cout<<"Enter the number of elements: "<<endl;
    cin>>size;
    
    int*q=Array(size);

    cout<<"Enter the elements: "<<endl;
    
    for(int i=0;i<size;i++)
    {
        cin>>q[i];
    }
    
    cout<<"Enter the key: "<<endl;
    cin>>key;

    cout<<"The key is found at "<<Linear_Search(q,key,size);

    return 0;
}