#include <iostream>
#include <iomanip>
using namespace std;
double factorial(int num);


int main()
{
    double prod;
prod=factorial(100);
cout<<"\n"<<fixed<<prod<<'\n';
}


double factorial(int num){
    if (num==1){
        return 1;   // 3!=3x2x1
    }
    else{
        double val=num*factorial(num-1);
        return val;
        
    }
    
}