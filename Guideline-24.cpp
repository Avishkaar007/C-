#include <iostream>
using namespace std;

class Box{
private:
    int length;
    int breadth;
    int height;
public:
    int SurfaceArea();
    int Volume();
    Box(int l,int b,int h);
    void menu();
    void check_cube();
    
};//Class Box
Box::Box(int l,int b,int h){
    length=l;
    breadth=b;
    height=h;
}
int Box::SurfaceArea(){
    
    int tsa=2*(length*breadth+breadth*height+length*height);
    cout<<"Total Surface Area is : "<<tsa<<" sq units.";
    menu();
}//Box::SurfaceArea

int Box::Volume(){
    int vol=length*breadth*height;
    cout<<"The volume of given Box is : "<<vol<<" cubic units.";
    menu();
}//Box::Volume
void Box::menu(){
cout<<"\n1: for Total Surface Area, 2 : for Volume ";
int choice;
cin>>choice;
switch (choice)
{
case 1:
    Box::SurfaceArea();
    break;
case 2:
    Box::Volume();


default:
    break;
}
}//menu

int main(){
int l,b,h;
cout<<"Enter <length>,<breadth> and <height> ";
cin>>l>>b>>h;
Box myBox(l,b,h);
myBox.menu();

}//main