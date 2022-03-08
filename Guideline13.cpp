#include <iostream>
using namespace std;
int alter(int* p1,int* p2)
{
    *p1*=2;
    *p2*=2;
    
    cout<<"Updated : (Here I am multiplying values by a factor of 2)\n"<<*p1<<','<<*p2;
}
int main()
{   int num1=5; // <-
    int num2=6; // <-
   
    int* p1=&num1;
    int* p2=&num2;
    
    cout<<"Original :\n"<<num1<<','<<num2<<endl;
    alter(p1,p2);
}

/* OUTPUT
Original :
5,6
Updated : (Here I am multiplying values by a factor of 2)
10,12
*/