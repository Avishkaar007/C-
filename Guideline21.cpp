#include <iostream>
using namespace std;

class Matrix
{

    public:
    Matrix();
    static int c_rows;
    static int c_col;
    int arr[c_rows][c_col];
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