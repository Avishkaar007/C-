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

    for(int row=0;row<sz;row++)
        {
        cout<<' '<<*(arr+row); 
        }
    cout<<endl;
    sort(arr,arr+sz,greater<int>());  
    for(int row=0;row<sz;row++)
        {
        cout<<' '<<arr[row]; 
        }
}