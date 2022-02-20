#include <iostream>
using namespace std;

//TO check whether prime or not
bool check_prime(int num)
{
    for(int n=2; n<num/2;n++)
    {
        if (num%n==0)
        {
            return false;
        }
        
    }
    return true;
}

int main()
{
int num=2;
int hundred=100;
for(num;num<hundred;num++)
    {
        bool val=check_prime(num);
        if (val==true)
        {
            cout<< num << '\n';
        }
    }
}