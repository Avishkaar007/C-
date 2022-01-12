#include <iostream>
using namespace std;

void star1();
void num_p();
void ABC_p();
void num_rev();
void star_rev();
void pascal_triangle();
void star_up();
void star_down();
void pyramid_123();
//pattern star-1

int main(){
    star_down();
}

void star1(){
    for(int a=1;a<6;a++){
        for(int b=1;b<a;b++){
        cout<<"*";
    }
    cout<<endl;
    }
}

void num_p(){
    for(int a=1;a<6;a++){
        for(int b=1;b<a;b++){
        cout<<b;
    }
    cout<<endl;
    }
}
void ABC_p(){
    for(int a=64;a<72;a++){
        for(int b=64;b<a;b++){
        cout<<char(a);
    }
    cout<<endl;
    }

}
void num_rev(){
    for(int a=6;a>0;a--){
        for(int b=1;b<a;b++){
        cout<<b;
    }
    cout<<endl;
    }
}

void star_rev(){
    for(int a=6;a>0;a--){
        for(int b=1;b<a;b++){
        cout<<"*";
    }
    cout<<endl;
    }
}

void pascal_triangle(){
    int sum=0;
    for(int a=6;a>0;a--){
        for(int b=1;b<a;b++){
            
        cout<<"*";
    }
    cout<<endl;
    }

}

void star_up(){
    int len;
    cout<<"Enter no of lines : ";
    cin>>len;
    
    int space_cnt=len;
    int star_count=1;
    for(int a=0;a<len;a++)
    { 
            
        for(int space=0;space<space_cnt;space++)
        {
            cout<<" ";
        }
        
        

        for(int star=0;star<star_count;star++)
        {
        cout<<"*";

        }
    
        for(int space=0;space<space_cnt;space++)
        {
            cout<<" ";
        }
    star_count+=2;  
    space_cnt--;
    cout<<endl;
    }
}
   


void star_down(){

    int len;
    cout<<"Enter no of lines : ";
    cin>>len;
    
    int space_cnt=0;
    int star_count=2*len-1;
    for(int a=0;a<len;a++)
    { 
            
        for(int space=0;space<space_cnt;space++)
        {
            cout<<" ";
        }
        
        for(int star=0;star<star_count;star++)
        {
        cout<<"*";

        }
    
        for(int space=0;space<space_cnt;space++)
        {
            cout<<" ";
        }
    star_count-=2;  
    space_cnt++;
    cout<<endl;
    } 
}
void pyramid_123(){
    
}
