#include <iostream>
using namespace std;

void even(int array[],int length);
void odd(int array[],int length);
void sum(int array[],int length);
void average(int array[],int length);
void choice(int array[],int length);
void input();

int main(){
    
    input();
}//main

void input()
{
    int length;
    cout<<"Enter length of Array ";
    cin>>length;
    int array[length];
    cout<<"Enter elements ";
    for(int elem=0;elem<length;elem++)
    {
    cin>>array[elem];
    }
    choice(array,length);
}

void even(int array[],int length){
cout<<endl;
for(int elem=0;elem<length;elem++){   
    
    if (array[elem]%2==0)
    {
    cout<<array[elem]<<' ';
    }
    
}
cout<<endl;
choice(array,length);
}

void odd(int array[],int length){
cout<<endl;
for(int elem=0;elem<length;elem++){   
    
    if (array[elem]%2!=0)
    {
    cout<<array[elem]<<' ';
    }
    
}
cout<<'\n'<<endl;
choice(array,length);
}

void sum(int array[],int length){
    int sum_terms=0;
    for(int elem=0;elem<length;elem++){
        sum_terms+=array[elem];
    }
cout<<"Sum of all terms in array is : "<<sum_terms<<'\n'<<endl; 
choice(array,length);
}

void average(int array[],int length){
    double avg;
    float sum_terms=0;
    for(int elem=0;elem<length;elem++){
        sum_terms+=array[elem];
    }
    avg=(sum_terms/length);
    cout<<"Average of all terms is : "<<avg<<'\n'<<endl;
    choice(array,length);
}
void choice(int array[],int length){
    int option;
    cout<<" 1 : Even Elements \n 2 : Odd Elements \n 3 : Sum of all elements \n 4 : Average of all elements ";
    cout<<"Enter what operation you want : ";
    cin>>option;
    if (option==1)
    {
        even(array,length);
    }
    else if (option==2)
    {
        odd(array,length);
    }
    else if (option==3)
    {
        sum(array,length);
    }
    else if(option==4);
    {
        average(array,length);
    }

}



