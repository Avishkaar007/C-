#include <iostream>
#include <cmath>
using namespace std;

class A{
    int a;
    public:
    A(){
        cout<<"\nConstructor A";
    }
    ~A(){
        cout<<"\nDestructor A";
    }


};  // A
class B:public A{
    int b;
    public:
        B(){
            cout<<"\nConstructor B";
        }
        ~B(){
            cout<<"\nDestructor B";
        }

};

class C:public B{
 int c;
    public:
        C(){
            
            cout<<"\nConstructor C";
        }
        ~C(){
            cout<<"\nDestructor C";
        }

};
class D:public C{
 int d;
    public:
        D(){
            
            cout<<"\nConstructor D";
        }
        ~D(){
            cout<<"\nDestructor D";
        }

};

 int main()
 {
    D obj;
 }

 /* Sequence of object creation and deletion
 Constructor A
Constructor B
Constructor C
Constructor D
Destructor D
Destructor C
Destructor B
Destructor A
*/



// int main(){
// doudle a,b,c;
// cout<<" Enter <a>,<b> : ";
// cin>>a>>b;
// double expr=a*a+b*b -2*a*b;
// c=pow(expr,0.5);
// cout<<" c = "<<c<<endl;
// }//main
