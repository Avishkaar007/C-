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
    Box();
    Box(int l,int b,int h);
    Box operator++(int);
    Box operator++();
    Box operator--(int);
    Box operator--();
    Box operator=(const Box &rhs);
    friend bool operator==(const Box &lhs,const Box &rhs);
    void menu();
    bool check_cube_or_cuboid();
    void print();
    
};//Class Box
bool operator==(const Box &lhs,const Box &rhs){
    if ((lhs.length==rhs.length) && (lhs.breadth==rhs.breadth) && (lhs.height==rhs.height))
    return true;
    else return false;
}
Box::Box(){
    length=0;
    breadth=0;
    height=0;
}
Box Box::operator=(const Box &rhs){
    breadth=rhs.breadth;
    height=rhs.height;
    length=rhs.length;
}
bool Box::check_cube_or_cuboid(){
    if((this->length)==(this->breadth) && (this->breadth)==(this->height)){
        cout<<"It is a cube"<<endl;
    }
    else cout<<"It is a cuboid"<<endl;
    menu();
}
Box::Box(int l,int b,int h){
    length=l;
    breadth=b;
    height=h;
}
Box Box:: operator++(){
    height++;
    breadth++;
    length++;
    cout<<"After Prefix Increment : ";
    print();
    return *this;
}
Box Box::operator++(int) //postfix
{
const Box copy=*this;
cout<<"After postfix Increment : ";
print();
height++;
breadth++;
length++;
return copy;

}
Box Box:: operator--(){
    height--;
    breadth--;
    length--;
    cout<<"After Prefix Decrement : ";
    print();
    return *this;
}
Box Box::operator--(int) //postfix
{
    const Box copy=*this;
    cout<<"After Postfix Decrement : ";
    print();
    height--;
    breadth--;
    length--;
    return copy;

}
void Box::print()
{
    cout<<" Length = "<<length<<" , Breadth = "<<breadth<<" , Height = "<<height<<endl;
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
cout<<"\n0: Exit \n1: for Total Surface Area, 2 : for Volume\n3: check_cube_or_cuboid => ";
int choice;
cin>>choice;
switch (choice)
{
case 0:
    exit;
    break;
case 1:
    Box::SurfaceArea();
    break;
case 2:
    Box::Volume();
    break;
case 3:
    Box::check_cube_or_cuboid();
    break;
default:
    break;
}
}//menu

int main(){
int l,b,h;
cout<<"Enter <length>,<breadth> and <height> ";
cin>>l>>b>>h;
Box myBox(l,b,h);

++myBox;
myBox++;
cout<<"\nCurrent Values : ";

myBox.print();
--myBox;
myBox--;
Box b2;

cout<<"\nCurrent Values : ";

myBox.print();
cout<<"b2==myBox : "<<((b2==myBox)?"True":"False")<<endl;
myBox.menu();
b2=myBox;
cout<<"After assignment , b2==myBox : "<<((b2==myBox)?"True":"False")<<endl;
cout<<"Second Box : ";
b2.print();

}//main

/* OUPTPUT
"Test Case 1"
Enter <length>,<breadth> and <height> 10 10 10
After Prefix Increment :  Length = 11 , Breadth = 11 , Height = 11
After postfix Increment :  Length = 11 , Breadth = 11 , Height = 11

Current Values :  Length = 12 , Breadth = 12 , Height = 12
After Prefix Decrement :  Length = 11 , Breadth = 11 , Height = 11
After Postfix Decrement :  Length = 11 , Breadth = 11 , Height = 11

Current Values :  Length = 10 , Breadth = 10 , Height = 10
b2==myBox : False

0: Exit 
1: for Total Surface Area, 2 : for Volume
3: check_cube_or_cuboid => 1
Total Surface Area is : 600 sq units.
0: Exit 
1: for Total Surface Area, 2 : for Volume
3: check_cube_or_cuboid => 2
The volume of given Box is : 1000 cubic units.
0: Exit
1: for Total Surface Area, 2 : for Volume
3: check_cube_or_cuboid => 3
It is a cube
------------------------------------------------------------------
"Test Case 2"
Enter <length>,<breadth> and <height> 10 4 3
0: Exit
1: for Total Surface Area, 2 : for Volume
3: check_cube_or_cuboid => 3
It is a cuboid

*/