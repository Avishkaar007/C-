#include <istream>
#include <ostream>
using namespace std;
int main(){
istream reader;
ostream printer;
int num;
reader.in(num);
printerout(num++);
}


cout<<"Enter no of rows in Matrix : ";
    cin>>c_rows;
    cout<<"Enter no of columns in Matrix : ";
    cin>>c_col;

void transpose(int arr[3][3])
{
 int temp=0;
 for(int row=0;row<3;row++)
 {
    for (int col=0;col<3;col++)
    
    {
        cout<<' '<<arr[col][row];
             
    }
    cout<<'\n';
 }