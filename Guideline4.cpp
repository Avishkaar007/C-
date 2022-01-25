#include <iostream>
using namespace std;


// Sum= 1-2+3-4+5.........


int main()
{
    int sum=0;
    int sign=1;
    int terms;
    cout<<"Enter number of terms in Series : ";
    cin>>terms;
    for (int looper=1;looper<=terms;looper++)
    {
        sum+=looper*sign;
        sign*=-1;
    }
    cout<<"The sum of series upto specified number of terms is : "<<sum;
}

/*  OUTPUT 1

Enter number of terms in Series : 11
The sum of series upto specified number of terms is : 6

    OUTPUT 2
Enter number of terms in Series : 12
The sum of series upto specified number of terms is : -6

*/