#include <iostream>
using namespace std;
int fibonacci(int num);


int main(){
fibonacci(100);

}

int fibonacci(int num){
    int num1=0; // 0 1 1 2 3 5 8 13
    int num2=1;
    int cnt=1;
    cout<<"1st term\t: "<<num1<<endl;
    while (num2<num){
    int temp1=num1;
    int temp2=num2;
    
    num1=temp2;
    
    cout<<++cnt<<" term\t: "<<num2<<endl;
    num2=temp2+temp1;
    }

    
}

