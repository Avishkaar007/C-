#include <iostream>
using namespace std;

// Sum = (1/1)+(1/2)+(1/3)+.......

int main()
{
    float sum=0;
    int num;
    cout<<"Enter number of terms : ";
    cin>>num;
    for(int looper=1;looper<=num;looper++)
    {
        sum+=((float)1/(float)looper);
    }
    cout<<"The sum is : "<<sum;

}

/* OUTPUT
Enter number of terms : 10
The sum is : 2.92897
*/
