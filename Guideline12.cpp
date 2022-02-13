#include <iostream>
using namespace std;

int main()
{
    
    int num1;
    int num2;
    int temp;
    
    cout<<"Enter num1 num2 : ";
    cin>>num1;
    cin>>num2;
    int* p1=&num1;
    int* p2=&num2;
    int* pt=&temp;
    cout<<"Before Swap : num1="<<num1<<"   num2="<<num2<<endl;
    temp=*p1;
    num1=*p2;
    num2=*pt;
    cout<<"After Swap : num1="<<num1<<"   num2="<<num2<<endl;
}

/*   OUTPUT
Enter num1 num2 : 10 12
Before Swap : num1=10   num2=12
After Swap : num1=12   num2=10
*/