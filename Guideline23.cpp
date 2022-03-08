#include <iostream>
#include <cmath>
using namespace std;
void area(){
   cout<<"Global Area function defination called "; 
}
class Triangle{
private:
float s1, s2,s3;
public:
Triangle(){
    s1=0;
    s2=0;
    s3=0;
}
Triangle(float a, float b , float c){
    s1=a;
    s2=b;
    s3=c;
}
bool operator==(const Triangle &rhs){
    if((this->s1==rhs.s1) && (this->s2==rhs.s2) && (this->s3==rhs.s3)){
        return true;
    }
    else return false;
}
void operator=(const Triangle &rhs){
    s1=rhs.s1;
    s2=rhs.s2;
    s3=rhs.s3;
}

float area(){
    double s=(s1+s2+s3)/2;
    double res=sqrt(s*(s-s1)*(s-s2)*(s-s3));
    return res;
    }

};

int main(){
    Triangle t1;
    Triangle t2(1,1,1);
    cout<<"Area from class defination : "<<t2.area()<<endl;
    area();
    
    cout<<"\nBefore Assignment operator (t1==t2)= ";
    cout<<((t1==t2)?"True":"False")<<endl;
    t1=t2;
    cout<<"After assignment operator (t1==t2)= ";
    
    cout<<((t1==t2)?"True":"False")<<endl;
}//main 

/* OUTPUT
Area from class defination : 0.433013
Global Area function defination called
Before Assignment operator (t1==t2)= False
After assignment operator (t1==t2)= True
*/