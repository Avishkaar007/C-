#include <iostream>
using namespace std;

int GCD_r(int num1,int num2)
{
    if(num2==0)
        return num1;
    return GCD_r(num2,(num1%num2));
}

int GCD_i(int num1, int num2)
{
    while(num1%num2!=0 )
    {
        int temp=num1;
        num1=num2;
        num2=(temp%num1);
    }
    return num2;
}

int main()

{
    int num1,num2;
    cout<<"Enter <num1>,<num2> , first bigger then smaller number : ";
    cin>> num1>>num2;
    int gcd_r=GCD_r(num1,num2);
    int gcd_i=GCD_i(num1,num2);
    printf("\nGCD  of %d, %d via recusrion is %d  ",num1,num2,gcd_r);
    printf("\nGCD of %d, %d via iteration is  %d ",num1,num2,gcd_i);
}

/* OUTPUT
Enter <num1>,<num2> , first bigger then smaller number : 117 13

GCD  of 117, 13 via recusrion is 13
GCD of 117, 13 via iteration is  13
*/