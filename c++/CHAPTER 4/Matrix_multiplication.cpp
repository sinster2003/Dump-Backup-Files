#include<iostream>

using namespace std;

int main()
{
    int a[10][10],b[10][10],mult[10][10];
    int r1,c1,r2,c2;
    cout<<"Enter the rows and columns of first matrix: ";
    cin>>r1>>c1;
    cout<<"Enter the rows and columns of second matrix: ";
    cin>>r2>>c2;

    if(c1!=r2){
        cout<<"Multiplication not possible";
        return 0;
    }

    cout<<"Enter elements of first matrix: ";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter elements of second matrix: ";
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>b[i][j];
        }
    }

    for(int i=0;i<c1;i++)
    {
        for(int j=0;j<r2;j++)
        {
            mult[i][j]=0;
            
            for(int k=0;k<c2;k++)
            {
                mult[i][j]+=a[i][k]*b[k][j];
            }

        }
    }

    for(int i=0;i<c1;i++){
        for(int j=0;j<r2;j++){
            cout<<mult[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
