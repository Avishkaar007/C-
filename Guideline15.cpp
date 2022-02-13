#include<iostream>
using namespace std;

int main()
{
    int num;
    int sum=0;
    int cnt=0;
    cout<<"Enter number of elements : ";
    cin>>num;
    int *arr = new int(num);
    cout<<"Enter elements : ";
    while(cnt<num)
    {
        cin>>arr[cnt];
        cnt++;
    }
    for(int printer=0;printer<num;printer++)
    {
        sum+=arr[printer];
    }
    
    cout<<"The sum of elements is : "<<sum;
    delete(arr);
    
    return 0;
}


