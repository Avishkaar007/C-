#include <iostream>

using namespace std;

void even(int array[],int length);
void odd(int array[],int length);
void sum(int array[],int length);
void average(int array[],int length);
void choice(int array[],int length);
void input();
void max_min(int array[],int length);
void duplicate(int array[],int length);
void print(int array[],int length);
void reverse(int array[],int length);
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
    cout<<" 0: Quit ,       1 : Even Elements \n 2 : Odd Elements\t3 : Sum of all elements \n";
    cout<<" 4 : Average of all elements\t5:Max and Minimum from Array \n 6:Duplicate \t 7 : Reverse array \n 10:New Array Input ";
    cout<<"\nEnter what operation you want : ";
    cin>>option;

    if (option==0)
        exit;
    
    else if (option==1)
        even(array,length);
    else if (option==2)
        odd(array,length);
    else if (option==3)
        sum(array,length);
    else if(option==4)
        average(array,length);
    else if(option==5)
        max_min(array,length);
    else if(option==6)
        duplicate(array,length);
    else if(option==7)
        reverse(array,length);
    else if (option==10)
        input();
}
void max_min(int array[],int length){
    int max_val=array[0];
    int min_val=array[0];
    for(int elem=1;elem<length;elem++){
        if (array[elem]<min_val)
        {
            min_val=array[elem];
        }
        if(array[elem]>max_val)
        {
            max_val=array[elem];
        }
    }
    cout<<"\nMaximum is : "<<max_val<<endl;
    cout<<"Minimum is : "<<min_val<<endl;
    choice(array,length);
}
void duplicate(int array[],int length)
// function to remove duplicate elements and using reduced array
{
    
    for(int elem=0;elem<length;elem++)
    {

        for(int elem_arr=elem+1;elem_arr<length;elem_arr++)
        {
            if (array[elem]==array[elem_arr] )
            { 
                int shift=elem_arr;
            while(shift<length)
            {
                array[shift]=array[shift+1];
                shift++;
            }
            length--;
            
            }
        }
            

    }
    print(array,length);
    cout<<"\nAssuming we now take reduced array \n";
    choice(array, length);

}
void print(int array[],int length)
{
    cout<<"[";
    cout<<array[0];
    for(int elem=1;elem<length;elem++){
        cout<<','<<array[elem];
    }
    cout<<"]";
}

void reverse(int array[],int length)
{
    cout<<"[";
    cout<<array[length-1];
 for(int elem=length-2;elem>-1;elem--){
        cout<<","<<array[elem];
    }
    cout<<"]";
}
