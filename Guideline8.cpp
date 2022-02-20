#include<iostream>
using namespace std;
#define SWAP(a,b) {int temp; temp=a; a=b; b=temp;}
int main()
{
    int num1,num2;
    cout<<"Enter <num1>,<num2> : ";
    cin>>num1>>num2;
    cout<<"Before Swap , num1= "<<num1<<" , num2= "<<num2<<endl;
    SWAP(num1,num2);
    cout<<"After Swap , num1= "<<num1<<" , num2= "<<num2;
}

/* Ouptut
Enter <num1>,<num2> : 10 20
Before Swap , num1= 10 , num2= 20
After Swap , num1= 20 , num2= 10
*/