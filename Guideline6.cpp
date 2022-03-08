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

for(num;num<100;num++)
    {
        bool val=check_prime(num);
        if (val==true)
        {
            cout<< num << '\n';
        }
    }
}
/* Output
2
3
4
5
7
11
13
17
19
23
29
31
37
41
43
47
53
59
61
67
71
73
79
83
89
97
*/
