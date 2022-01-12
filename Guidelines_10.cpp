#include <iostream>
using namespace std;

void even(int array[],int length);
void odd(int array[],int length);
void sum(int array[],int length);
void average(int array[],int length);
int main(){
    int length;
    cout<<"Enter length of Array ";
    cin>>length;
    int array[length];
    cout<<"Enter elements ";
    for(int elem=0;elem<length;elem++)
    {
    cin>>array[elem];
    }
    average(array,length);
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
}

void odd(int array[],int length){
cout<<endl;
for(int elem=0;elem<length;elem++){   
    
    if (array[elem]%2!=0)
    {
    cout<<array[elem]<<' ';
    }
    
}
cout<<endl;
}

void sum(int array[],int length){
    int sum_terms=0;
    for(int elem=0;elem<length;elem++){
        sum_terms+=array[elem];
    }
cout<<"Sum of all terms in array is : "<<sum_terms<<endl; 
}

void average(int array[],int length){
    double avg;
    float sum_terms=0;
    for(int elem=0;elem<length;elem++){
        sum_terms+=array[elem];
    }
    avg=(sum_terms/length);
    cout<<"Average of all terms is : "<<avg<<endl;
    
}



