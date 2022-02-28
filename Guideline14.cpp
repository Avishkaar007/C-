#include<iostream>
using namespace std;


int circle(float radius,double &area, double &circumference){
    area=3.14159*radius*radius;
    circumference=2*3.14159*radius;
    
return 0;
}
int main(){
    
float radius;
double area,circumference;
    
    cout<<"Enter Radius of Circle : ";
    cin>>radius;
    circle(radius,area,circumference);
    cout<<"Area is "<<area<<" sq units "<<endl;
    cout<<"Circumference is "<<circumference<<" units"<<endl;

    return 0;
}

/* Output
Enter Radius of Circle : 10.1
Area is 320.474 sq units 
Circumference is 63.4601 units
*/
