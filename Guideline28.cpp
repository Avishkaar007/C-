#include <iostream>
using namespace std;
int size=0;
void reverse(int* arr)
{   
    int sz= size;
    
    for(int elem=0;elem<(sz/2);elem++)

//  1 2 3 4 5 
//  5 2 3 4 1
//  5 4 3 2 1

    {   
        int temp=*(arr+elem); // temp =arr[i]
        *(arr+elem)=*(arr +sz-elem-1); //arr[i]=arr[sz-i-1]
        *(arr +sz-elem-1)=temp;// arr[sz-i-1]=arr[i]
    
    }
    cout<<"\n Reversed Array : \n";
    for(int row=0;row<sz;row++)
        {
        cout<<' '<<*(arr+ row); 
        }
        
}
    

int main()
{
    int elements;
    cout<<"Enter no of elements in Array : ";
    cin>>elements;
    
    int arr[elements]={};
    
   cout<<"Enter elements ";
    for(int row=0;row<elements;row++)
    {
       cin>>arr[row];
    }
    size=elements;
    reverse(arr);
}

/*OUTPUT
Enter no of elements in Matrix : 5
Enter elements 1 2 3 4 6

 Reversed Array :
 6 4 3 2 1
 */
