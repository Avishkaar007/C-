#include <iostream>
using namespace std;
int fibonacci(int num);


int main(){
   int num;
   cout<<"Enter number of terms in series : ";
   cin>>num;
fibonacci(num);

}

int fibonacci(int num){
    int num1=0; // 0 1 1 2 3 5 8 13
    int num2=1;
    
    cout<<"Term 1 : "<<num1<<endl<<"Term 2 : "<<num2<<endl;
    int cnt=2;
    for (cnt;cnt<num; ){
    int temp1=num1;
    int temp2=num2;
    
    num1=temp2;
    num2=temp2+temp1;
    cout<<" term "<<++cnt<<" : "<<num2<<endl;
    
    }

    
}

