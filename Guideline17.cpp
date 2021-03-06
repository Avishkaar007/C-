#include<iostream>
using namespace std;

void print(int array[],int length)
{
    cout<< "The sorted merged array is : ";
    cout<<"[";
    cout<<array[0];
    for(int elem=1;elem<length;elem++){
        cout<<','<<array[elem];
    }
    cout<<"]";
}//print

int merge(int arr1[],int sz1,int arr2[],int sz2)
{
    // arr1 = 1,2,3
    // arr2 = 4,2,5,6
    // arr3 = 0,0,0,0,0,0,0
    int arr3[sz1+sz2]={};
    int p1=0,p2=0,p3=0;
    
    while(p1<sz1 && p2<sz2)
    {
        if(arr1[p1]>arr2[p2])
            arr3[p3++]=arr2[p2++];
        else
            arr3[p3++]=arr1[p1++];
        
    }
    while(p1<sz1)
    {
        arr3[p3++]=arr1[p1++];
    }

    while(p2<sz2)
    {
        arr3[p3++]=arr2[p2++];
    }
    print(arr3,sz1+sz2);
    
}//merge

int main()
{
    
    int length;
    cout<<"Enter length of Array 1 : ";
    cin>>length;
    int arr1[length]={};
    cout<<"Enter Elements of Array 1 : ";
    for(int term=0;term<length;term++)
    {
        cin>>arr1[term];
    }
    cout<<"Enter length of array 2 :  ";
    cin>>length;
    int arr2[length]={};
    cout<<"Enter Elements of Array 2 : ";
    for(int term=0;term<length;term++)
    {
        cin>>arr2[term];
    }
    
    int sz1=sizeof(arr1)/4;
    int sz2=sizeof(arr2)/4;
    
    merge(arr1,sz1,arr2,sz2);
} //main

/* OUTPUT
Enter length of Array 1 : 3 
Enter Elements of Array 1 : 1 2 3
Enter length of array 2 :  4
Enter Elements of Array 2 : 2 3 4 5
The sorted merged array is : [1,2,2,3,3,4,5]
*/
