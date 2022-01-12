#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number ";
    cin>>num;
    int denom=1;
    cout<<"Factors of "<<num<<" are ";
    while (denom<=(num/2)){
        if (num%denom==0){
            cout<<"   "<<denom;}
        denom++;
        
    }
    return 0;
}