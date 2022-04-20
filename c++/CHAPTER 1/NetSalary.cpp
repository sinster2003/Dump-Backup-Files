#include<iostream>

using namespace std;

int main(){

    double basic_salary,net_salary,allowances,deductions;

    cout<<"Enter the amount of Basic Salary: "<<endl;
    cin>>basic_salary;

    cout<<"Enter the percentage of allowances: "<<endl;
    cin>>allowances;

    cout<<"Enter the percentage of deductions: "<<endl;
    cin>>deductions;

    net_salary=basic_salary+basic_salary*(allowances/100)-basic_salary*(deductions/100);

    cout<<"The net salary is :"<<net_salary<<endl;

    return 0;
}