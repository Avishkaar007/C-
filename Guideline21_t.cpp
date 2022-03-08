#include <iostream>
using namespace std;

class Matrix
{

    public:
    Matrix();
    int c_rows;
    int c_col;
    int** arr[c_rows][c_col];
    void transpose(int arr[c_rows][c_col]);
    void print(int arr[c_rows][c_col]);
    int inp();

};

void sum();
void difference();
void product();


int main()
{   Matrix m1;
    m1.inp();
  
}

void Matrix::transpose(int arr[c_rows][c_col])
{
 int temp=0;
 for(int row=0;row<c_rows;row++)
 {
    for (int col=0;col<c_col;col++)
    
    
    {
        if(row<col)
        {
        temp=arr[row][col];
        arr[row][col]=arr[col][row];
        arr[col][row]=temp;
        }
    }
    
 }

}

Matrix::Matrix() 
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
            
            cin>>Matrix::arr[row][column];
        }
    }
    
}

void Matrix::print(int arr[c_rows][c_col])
{
    
    for(int row=0;row<c_rows;row++){
        for(int column=0;column<c_col;column++ )
        {
        cout<<' '<<arr[row][column];
        }
        cout<<endl;
    }
}

















#include <iostream>
#include <vector>
using namespace std;


void sum(int* arr);
void difference(int* arr);
void product(int* arr);
void menu(int* arr);
void transpose(int* arr);
void print(int* arr);
int* inp(int flag=0);
int c_rows=0,c_col=0;

int main()
{   
    inp();
}
void sum(int* arr)
{
    int* arr2=inp(1);
    for(int row=0;row<c_rows;row++)
    {
        for(int col=0;col<c_col;col++)
        {
            //arr[row][col]=arr[row][col]+arr2[row][col];
            *(arr+(row*c_rows)+col)=*(arr+(col*c_col)+row)+*(arr2+(col*c_col)+row);
        }
    }
    print(arr);
    

}

void product(int* arr){

}

void menu(int* arr)
{
    int inp;
    cout<<"What operation you want?\n1 : Sum , 2 : Difference\n3: Product , 4 : Transpose\n";
    cin>>inp;
    switch (inp)
    {
        case (1):
        {   sum(arr);
            break;}
        case (2):
        {   difference(arr);
            break;}
        case(3):
        {
            product(arr);
            break;
        }
        case(4):
        {
            transpose(arr);
            break;
        }
    }
}
void difference(int* arr)
{
    int* arr2=inp(1);
    for(int row=0;row<c_rows;row++)
    {
        for(int col=0;col<c_col;col++)
        {
            *(arr+(row*c_rows)+col)=*(arr+(col*c_col)+row)+*(arr2+(col*c_col)+row);
        }
    }
    print(arr);
    
}
void transpose(int* arr)
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

 print(arr);

}


int* inp(int flag)  
// if flag=0 then return not needed if flag=1 return is needed
{
    
    cout<<"Enter no of rows in Matrix : ";
    cin>>c_rows;
    cout<<"Enter no of columns in Matrix : ";
    cin>>c_col;
    int arr[c_col*c_rows]={0};
    
    for(int row=0;row<c_rows;row++)
    {
        cout<<"Enter Row "<<row+1<<" : ";
        for(int column=0;column<c_col;column++)
        {
            
            cin>>*(arr+row*c_rows+c_col*column);
        }
    }
    
    if (flag==1)
    {
        return (&arr[0][0]);
    }
    cout<<"Entered Matrix is\n";
    print(&arr[0][0]); 
    
}

void print(int* arr)
{
    
    for(int row=0;row<c_rows;row++){
        for(int col=0;col<c_col;col++)
        {
        cout<<' '<<*(arr+(row*c_rows)+col); 
        }
        cout<<endl;
    }
    menu(arr);
}