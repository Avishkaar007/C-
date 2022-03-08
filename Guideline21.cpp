#include <iostream>

using namespace std;


void sum(int* arr);
void difference(int* arr);
void product(int* arr);
void menu(int* arr);
void transpose(int* arr);
void print(int* arr);
int* inp();
int c_rows=0,c_col=0;

int main()
{   
    int* arr1={};
    arr1=inp();
    menu(arr1);
}
void sum(int* arr)
{
    int arr2[c_rows*c_col]={0};
    int sum[c_rows*c_col]={0};
    for(int row=0;row<c_rows;row++)
    {
        cout<<"Enter Row "<<row+1<<" of Matrix 2 : ";
        for(int column=0;column<c_col;column++)
        {
            
            cin>>*(arr2+row*c_rows+column);
        }
    }
     
    for(int row=0;row<c_rows;row++)
    {
        for(int col=0;col<c_col;col++)
        {
            //arr[row][col]=arr[row][col]+arr2[row][col];
            *(sum+(row*c_rows)+col)=*(arr+(row*c_rows)+col)+*(arr2+(row*c_rows)+col);
        }
    }
    print(sum);
    

}

void product(int* arr){
    int r2,c2;
    int r1=c_rows;
    int c1=c_col;
    cout<<"Enter number of rows of Matrix 2 : ";
    cin>>r2;
    cout<<"Enter number of columns of Matrix 2 : ";
    cin>>c2;
        if(c_col!= r2){
        cout << "Matrix  multiplaction Not possible for the given matrices";
    } else {
        int arr2[r2*c2]={0};
        for(int row=0;row<r2;row++)
        {
            cout<<"Enter Row "<<row+1<<" of Matrix 2 : ";
            for(int column=0;column<c2;column++)
            {
                cin>>*(arr2+row*r2+column);
            }
        }//for
       
        
        int prod[r1][c2];
     
       for(int i=0; i<r1; i++){
            for(int j=0; j<c2; j++){
                int sum =0;
                for(int k=0; k<r2; k++){
                    sum += (*(arr+i*r1+k) *(*(arr2+r2*k+j)));
                }
                prod[i][j] = sum;
            }
        }
        int prdct[r1*c2]={};
        for(int i=0; i<r1; i++){
            for(int j=0; j<c2; j++){
                *(prdct+i*r1+j)=prod[i][j];
               cout<<' '<<prod[i][j];
            }
            cout<<endl;
        }
        menu(prdct); 
   
    }
    
    
}//product

void menu(int* arr)
{
    int inp;
    cout<<"What operation you want?\n1 : Sum , 2 : Difference,\n3 : Transpose , 4: Product \n=> ";
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
            transpose(arr);
            break;
        }
        case(4):
        {
            product(arr);
            break;
        }
        
    }
}
void difference(int* arr)
{
    
    int arr2[c_rows*c_col]={0};
    int diff[c_rows*c_col]={0};
    for(int row=0;row<c_rows;row++)
    {
        cout<<"Enter Row "<<row+1<<" of Matrix 2 : ";
        for(int column=0;column<c_col;column++)
        {
            
            cin>>*(arr2+row*c_rows+column);
        }
    }
    for(int row=0;row<c_rows;row++)
    {
        for(int col=0;col<c_col;col++)
        {
            *(diff+(row*c_rows)+col)=*(arr+(row*c_rows)+col)-*(arr2+(row*c_rows)+col);
        }
    }
    print(diff);
    
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



int* inp()  

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
            
            cin>>*(arr+row*c_rows+column);
        }
    }
    
    
    cout<<"Entered Matrix is\n";
    print(&arr[0]); 
    int* array=NULL;
    array=new int [c_rows*c_col];
    return (array);
    
    
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


/* OUTPUT
Enter no of rows in Matrix : 3
Enter no of columns in Matrix : 3
Enter Row 1 : 1 2 3
Enter Row 2 : 4 5 6
Enter Row 3 : 7 8 9
Entered Matrix is
 1 2 3
 4 5 6
 7 8 9
What operation you want?
1 : Sum , 2 : Difference,
3 : Transpose , 4: Product
=> 1
Enter Row 1 of Matrix 2 : 1 2 4
Enter Row 2 of Matrix 2 : 4 5 6
Enter Row 3 of Matrix 2 : 7 8 9
 2 4 7
 8 10 12
 14 16 18
What operation you want?
1 : Sum , 2 : Difference,
3 : Transpose , 4: Product
=> 2
Enter Row 1 of Matrix 2 : 1 2 4
Enter Row 2 of Matrix 2 : 4 5 6
Enter Row 3 of Matrix 2 : 7 8 9
 1 2 3
 4 5 6
 7 8 9
What operation you want?
1 : Sum , 2 : Difference,
3 : Transpose , 4: Product
=> 3
 1 4 7
 2 5 8
 3 6 9
What operation you want?
1 : Sum , 2 : Difference,
3 : Transpose , 4: Product
=> 4
Enter number of rows of Matrix 2 : 3
Enter number of columns of Matrix 2 : 1
Enter Row 1 of Matrix 2 : 1
Enter Row 2 of Matrix 2 : 1 
Enter Row 3 of Matrix 2 : 1
 12
 15
 18
What operation you want?
1 : Sum , 2 : Difference,
3 : Transpose , 4: Product
=>
*/