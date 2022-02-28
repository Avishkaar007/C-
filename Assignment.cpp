#include <iostream>
using namespace std;
class TwoDim{
    protected:
        int x;
        int y;
       
    public:
        TwoDim();
        TwoDim(int x,int y);
        void print() const;

};

TwoDim::TwoDim()
{
    x=0;
    y=0;
}
TwoDim::TwoDim(int X,int Y)
{
    x=X;
    y=Y;
}
void TwoDim::print() const
{
    cout<<"x= "<<x<<" y= "<<y<<endl;

}//print

class ThreeDim:public TwoDim {
private:
    int z;
public:
    ThreeDim();
    ThreeDim(int X,int Y,int Z);
    void print() const;
    
};  //ThreeDim
ThreeDim::ThreeDim()
{
    x=0; // Default set to 0
    y=0;
    z=0;
}
ThreeDim::ThreeDim(int X,int Y,int Z)
{
    x=X;
    y=Y;
    z=Z;
}
void ThreeDim::print() const
{
    cout<<"x= "<<x<<" y= "<<y<< " z= "<<z<<endl;
}
int main()
{
    TwoDim td;
    cout<<"Witout parameter :";
    td.print();
    TwoDim td1(3,4);
    cout<<"With Parameter : ";
    td1.print();
    ThreeDim three1;
    cout<<"Witout parameter :";
    three1.print();
    ThreeDim three2(2,3,4);
    cout<<"With Parameter : ";
    three2.print();
  

}//main




