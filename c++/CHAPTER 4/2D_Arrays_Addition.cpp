#include<iostream>

using namespace std;

int main()
{

    int A[2][3]={3,4,7,5,6,8};
    int B[2][3]={3,1,2,5,9,3};
    int C[2][3];

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}