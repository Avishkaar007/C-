#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;
    cout<<"Original Number was : "<<num<<endl;
    int temp=num;
    int rev=0;
    int rem=0;
    while(temp>0)
    {
        rem=temp%10;
        rev=(rev)*10 + rem;
        temp/=10;
    }

cout<<"Reversed number is : "<<rev<<endl;

}