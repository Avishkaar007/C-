#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10]={};
    cout<<"Enter 10 elements ";
    for(int elem=0;elem<10;elem++)
    {
        cin>>*(arr+elem);
    }
    int sz=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+sz);
    cout<<"\nAscending :";
    for(int row=0;row<sz;row++)
        {
        cout<<' '<<*(arr+row); 
        }
    cout<<endl;
    sort(arr,arr+sz,greater<int>()); 
    cout<<"\nDescending :";
    for(int row=0;row<sz;row++)
        {
        cout<<' '<<arr[row]; 
        }
}

/* OUTPUT
Enter 10 elements 3 2 1 0 6 5 4 9 8 7

Ascending : 0 1 2 3 4 5 6 7 8 9

Descending : 9 8 7 6 5 4 3 2 1 0
*/