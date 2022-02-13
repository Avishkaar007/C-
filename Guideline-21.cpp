#include <iostream>
using namespace std;


void sum(int* arr,int c_rows,int c_col);
void difference();
void product();
void menu(int* arr,int c_rows,int c_col);
void transpose(int* arr,int c_rows,int c_col);
void print(int* arr,int c_rows,int c_col);
int* inp(int flag=0);


int main()
{   
    inp(); 
}
void sum(int* arr,int c_rows,int c_col)
{
    int* arr2=inp(1);
    for(int row=0;row<c_rows;row++)
    {
        for(int col=0;col<c_col;col++)
        {
            *(arr+(row*c_rows)+col)=*(arr+(col*c_col)+row)+*(arr2+(col*c_col)+row);
        }
    }
    print(arr,c_rows,c_col);
    
    

}

void menu(int* arr,int c_rows,int c_col)
{
    int inp;
    cout<<"What operation you want?\n1 : Sum , 2 : Difference\n3: Product , 4 : Transpose\n";
    cin>>inp;
    switch (inp)
    {
        case (1):
        {sum(arr,c_rows,c_col);
        break;}
        case (2):
        {difference();
        break;}
    }
}
void difference()
{

}
void transpose(int* arr,int c_rows,int c_col)
{
 int temp=0;
 for(int row=0;row<c_rows;row++)
 {
    for (int col=0;col<c_col;col++)
    
    
    {
        if(row<col)
        {
        temp=*(arr+(row*c_rows)+col);
        *(arr+(row*c_rows)+col)=*(arr+(col*c_col)+row);
        *(arr+(col*c_col)+row)=temp;
        }
    }
    
 }

 print(arr,c_rows,c_col);

}


int* inp(int flag)  
// if flag=0 then return not needed if flag=1 return is needed
{
    int c_rows,c_col;
    cout<<"Enter no of rows in Matrix : ";
    cin>>c_rows;
    cout<<"Enter no of columns in Matrix : ";
    cin>>c_col;
    int arr[c_rows][c_col]={};
    
   
    for(int row=0;row<c_rows;row++)
    {
        cout<<"Enter Row "<<row+1<<" : ";
        for(int column=0;column<c_col;column++)
        {
            
            cin>>arr[row][column];
        }
    }
    
    if (flag==1)
    {
        return (&arr[0][0]);
    }
    cout<<"Entered Matrix is\n";
    print(&arr[0][0],c_rows,c_col); 
    
}

void print(int* arr,int c_rows,int c_col)
{
    
    for(int row=0;row<c_rows;row++){
        for(int col=0;col<c_col;col++)
        {
        cout<<' '<<*(arr+(row*c_rows)+col); 
        }
        cout<<endl;
    }
    menu(arr,c_rows,c_col);
}