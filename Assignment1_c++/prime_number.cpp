#include<iostream>
using namespace std;
int main()
{
    int n,i,c = 0;
    cout<<"\nEnter the number: ";
    cin>> n;
    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            c++;
        }
    }
    if(c == 2)
    {
        cout<<"\n"<< n <<" is Prime number.\n";
    }
    else
    {
        cout<<"\n"<< n <<" is not Prime number.\n";
    }
    return 0;
}
