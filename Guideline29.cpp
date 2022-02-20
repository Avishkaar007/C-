#include <iostream>
#include <stdlib.h>
using namespace std;
int size=0;
void menu(int * arr);
void sort(int* arr,int mode=0) //mode =0 (Ascending),mode =1 (Descending) , mode=-1 : exit
{
    
    if (mode==0){

    for(int looper=0;looper<size-1;looper++)
    {
        for (int elem=0;elem<size-1-looper;elem++)
        {
            if (*(arr+elem)>*(arr+elem+1))
            {
               int temp=*(arr+elem);
                *(arr+elem)=*(arr+elem+1);
                *(arr+elem+1)=temp;
            }//if-2
           
        }//for-2
    }//for
    }//if
    else if (mode==1)
    {
        for(int looper=0;looper<size-1;looper++)
        {
        for (int elem=0;elem<size-looper-1;elem++)
        {
            if (*(arr+elem)<*(arr+elem+1))
            {
                int temp=*(arr+elem);
                *(arr+elem)=*(arr+elem+1);
                *(arr+elem+1)=temp;
            }//if-2
        }//for-2
        }//for
    }//if
    else if (mode==-1)
    {
        abort();
    }
    else
    {cout<<"Wrong Input ,Try Again \n";
    menu(arr);}
    if(mode==0)
    {
    cout<<"Ascending : ";
    }
    else if (mode==1) {
    cout<<"Descending : ";
    }
    for(int row=0;row<size;row++)
        {
        cout<<' '<<*(arr+ row); 
        }
    menu(arr);    
 
    
}//sort

void menu(int * arr){
int mode;
cout<<"\n0 : Ascending , 1 : Descending , -1 : Exit \nChoice : ";
cin>>mode;
sort(arr,mode);


}//menu

int main()
{
    int arr[10]={};
    cout<<"Enter 10 elements ";
    for(int elem=0;elem<10;elem++)
    {
        cin>>arr[elem];
    }
    size=sizeof(arr)/sizeof(arr[0]);
    menu(arr);
}//main


/* OUTPUT
Enter 10 elements 3 2 1 0 6 5 4 9 8 7

0 : Ascending , 1 : Descending , -1 : Exit
Choice : 0
Ascending :  0 1 2 3 4 5 6 7 8 9
0 : Ascending , 1 : Descending , -1 : Exit
Choice : 1
Descending :  9 8 7 6 5 4 3 2 1 0
0 : Ascending , 1 : Descending , -1 : Exit
Choice : -1
*/