#include <iostream>

using namespace std;
double factorialR(int num);
double factorialI(int num);

void main()
{
    double prod;
    int number;
    cout<<"Enter number : ";
    cin>>number;
    cout<<"Using Recursion ";
    prod=factorialR(number);
    cout<<"\n"<<prod<<'\n';
    prod=factorialI(number);
    cout<<"\nUsing Iteration "<<endl<<prod;

}


double factorialR(int num){
    if (num==1){
        return 1;   // 3!=3x2x1
    }
    else{
        double val=num*factorialR(num-1);
        return val;
        
    }
    
}
double factorialI(int num)
{
    double prod=1;
    for(int looper=num;looper>0;looper--)
        prod*=looper;
    return prod;
}

/*  OUTPUT
Enter number : 20
Using Recursion 
2432902008176640000.000000

Using Iteration
2432902008176640000.000000

*/