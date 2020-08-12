#include<iostream>
using namespace std;
int checkprimenumber(int n);
int main()
{
  int n1,n2,i,flag;
  cout<<"\nEnter the first number: ";
  cin>> n1;
  cout<<"Enter the second number: ";
  cin>> n2;
  cout<<"\nThe Prime numbers between the number "<<n1<<" and "<<n2<<" are: \n";
  for(i = n1 + 1; i < n2; i++)
  {
    flag = checkprimenumber(i);
    if(flag == 1)
    {
      cout<< i <<"\t";
    }
  }
  cout<<"\n";
return 0;
}
int checkprimenumber(int n)
{
  int j,flag = 1;
  for(j = 2; j <= n/2; j++)
  {
    if(n % j == 0)
    {
      flag = 0;
      break;
    }
  }
  return flag;
}
