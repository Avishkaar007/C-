#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;
    int temp_sum=num;
    int temp_prod=num;
    int sum=0;
    int prod=1;
    while(temp_sum>0)
    {
        sum+=(temp_sum%10);
        temp_sum/=10;
    }
    while(temp_prod>0)
    {
        prod*=(temp_prod%10);
        temp_prod/=10;
    }
    cout<<"The Original number is : "<<num<<endl;
    cout<<"The Sum of Digits is : "<<sum<<endl;
    cout<<"The Product of Digits is : "<<prod<<endl;
    return 0;
}

/*
 OUTPUT
Enter number : 123456
The Original number is : 123456
The Sum of Digits is : 21
The Product of Digits is : 720
*/