#include <iostream>
using namespace std;
void reverse(int arr)  
{   int sz=sizeof(arr);
    cout<<sz;
    for(int elem;elem<int(sz/2);elem++)
    {   int temp=arr[elem];
        arr[elem]=arr[sz-elem];
        arr[sz-elem]=temp;
    }
    
    for(int row=0;row<sz;row++)
        {
        cout<<' '<<(arr+ row); 
        }
        
}
    

int main()
{
    int elements;
    cout<<"Enter no of elements in Matrix : ";
    cin>>elements;;
    
    int arr[elements]={};
    
   cout<<"Enter elements ";
    for(int row=0;row<elements;row++)
    {
       cin>>arr[row];
    }
    reverse(arr);
}