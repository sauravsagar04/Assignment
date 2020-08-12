#include<iostream>
using namespace std;
int main()
{
    int n,num,rev=0,rmd;
    cout<<"\nEnter the number: ";
    cin>> n;
    num = n;
    while(n > 0)
    {
        rmd = n % 10;
        rev = rev * 10 + rmd;
        n = n / 10;
    }
    if(num == rev)
    {
        cout<<"\nGiven number is palindrome.\n";
    }
    else
    {
        cout<<"\nGiven number is not a palindrome.\n";
    }
    return 0;
}
