#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    int i,n,flag=0;
    cout<<"\nEnter the string: ";
    getline(cin, str);
    n = str.length();
    for(i = 0; i < n; i++)
    {
        if(str[i] != str[n-i-1])
        {
            flag = 1;
            break;
        }
    }
    if(flag)
    {
        cout<<"\n"<<str<<" is not a palindrome. \n";
    }
    else
    {
        cout<<"\n"<<str<<" is a palindrome. \n";
    }
    return 0;
}
