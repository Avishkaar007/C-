#include <iostream>
using namespace std;
int fibonacci_r(int num);
int fibonacci_i(int num);

int main(){
   int num;
   cout<<"Enter number of terms in series : ";
   cin>>num;
fibonacci_i(num);
int r_count=0;
cout<<"\nUsing Recursion \n";
for(r_count;r_count<num;r_count++)
{
cout<<" Term  "<<r_count+1<<" : " <<fibonacci_r(r_count)<<endl;
}
}
int fibonacci_r(int num){
    
    if (num==0||num==1)
    {return num;}
    else
    {return fibonacci_r(num-1)+fibonacci_r(num-2);}
}


int fibonacci_i(int num){
    int num1=0; // 0 1 1 2 3 5 8 13
    int num2=1;
    cout<<"Using Iteration \n";
    cout<<"Term 1 : "<<num1<<endl<<"Term 2 : "<<num2<<endl;
    int cnt=2;
    for (cnt;cnt<num; ){
    int temp1=num1;
    int temp2=num2;
    
    num1=temp2;
    num2=temp2+temp1;
    cout<<"Term "<<++cnt<<" : "<<num2<<endl;
    
    }

    
}

/*
Enter number of terms in series : 7
Using Iteration 
Term 1 : 0
Term 2 : 1
Term 3 : 1
Term 4 : 2
Term 5 : 3
Term 6 : 5
Term 7 : 8

Using Recursion
 Term  1 : 0
 Term  2 : 1
 Term  3 : 1
 Term  4 : 2
 Term  5 : 3
 Term  6 : 5
 Term  7 : 8
 */


