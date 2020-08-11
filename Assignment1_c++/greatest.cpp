#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3,large;
    cout<<"\n Enter the first number:  ";
    cin>> num1;
    cout<<"\n Enter the second number:  ";
    cin>> num2;
    cout<<"\n Enter the third number:  ";
    cin>> num3;
    large = num1>num2?(num1>num3?num1:num3) : (num2>num3?num2:num3);
    cout<<"\n The largest number is: "<<large<<"\n";
    return 0;
}
