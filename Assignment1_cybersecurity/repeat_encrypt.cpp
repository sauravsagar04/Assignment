#include<iostream>
#include<string>
using namespace std;
void encrypt(string str)
{
  char evenpos = '$', oddpos = '#',a,A;
  int i,j,repeat,ascii;
  for(i = 0; str[i] != '\0'; i++)
  {
    ascii = str[i];
      if(str[i]>64 && str[i]<92)
      {
        repeat = ascii >= 65 ? ascii - 64 : A;
        for(j = 0; j < repeat; j++)
        {   
          if(i % 2 == 0)
          {
            cout<< oddpos;
          } 
          else
          {
            cout<< evenpos;
          }
        }
      }
      else if(str[i]>96 && str[i] < 123)
      {
        repeat = ascii >= 97 ? ascii - 96 : a;
        for(j = 0; j < repeat; j++)
        {
          if(i % 2 == 0)
          {
            cout<< oddpos;
          } 
          else
          {
            cout<< evenpos;
          }
        }  
      }
  }
}
int main()
{
  string str;
  cout<<"\nEnter the String:\n";
  getline(cin, str);
  cout<<"\nEncrypted String:\n";
  encrypt(str);
  cout<<"\n";
  return 0;
}
