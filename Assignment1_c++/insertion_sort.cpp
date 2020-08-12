#include<iostream>
using namespace std;
void insertion_sort(int ar[], int n);
int main()
{
    int ar[20],i,n;
    cout<<"\nEnter the size of array:  ";
    cin>> n;
    cout<<"\nEnter the elements of array\n";
    for(i = 0; i < n; i++)
    {
        cin>> ar[i];
    }
    insertion_sort(ar,n);
    cout<<"\n The sorted array is: \n";
    for(i = 0; i < n; i++)
    {
        cout<<ar[i]<<"\t";
    }
    cout<<"\n"; 
    return 0;
}
void insertion_sort(int ar[], int n)
{
    int i,j,temp;
    for(i = 0; i < n; i++)
    {
        temp = ar[i];
        j = i -1;
        while((temp < ar[j]) && (j >= 0))
        {
            ar[j+1] = ar[j];
            j--;
        }
        ar[j+1] = temp;
    }
}
