#include<iostream>
using namespace std;
int main()
{
    int num[50],i,j,n,temp;
    cout<<"\nEnter the size of array\n";
    cin>> n;
    cout<<" Enter the numbers \n";
    for(i = 0; i< n; i++)
    {
        cin>> num[i];
    }
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(num[i] < num[j])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    cout<<"\nThe 2nd largest number is: "<<num[1]<<"\n";
    cout<<"The 2nd smallest number is: "<<num[n - 2]<<"\n";
    return 0;
}
