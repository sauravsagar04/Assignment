#include<iostream>
#include<string>
using namespace std;
int main()
{
  int i,num;
  string str;
  cout<<"\nEnter the string: \n";
  getline(cin , str);
  cout<<"Choose the option\n";
  cout<<"Press 1 for Encrypting the string: \n";
  cout<<"Press 2 for Decrypting the string: \n";
  cin>> num;
  switch(num)
  {
    case 1:
      for(i = 0; str[i] != '\0'; i++)
      {
        str[i] = str[i] + 5;
      }
      cout<<"\nEncrypted string:\t"<<str<<"\n";
      break;
    case 2:
      for(i = 0; str[i] != '\0'; i++)
      {
        str[i] = str[i] - 5;
      }
      cout<<"\nDecrypted string:\t"<<str<<"\n";
      break;   
    default:
      cout<<"\nError\n";  
  }
  return 0;
}
