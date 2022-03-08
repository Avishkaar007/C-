// add two given time  using class

// add 2 complex  using complex class
#include <iostream>
using namespace std;
//assuming 24 hour clock
class time
{
private:
    int second;
    int minute;
    int hour;
public:
    time();
    time(int h , int m,int s);
    time& operator+(time& t1,time &t2);
    ~time();
};

}
time& time::operator+(time& t1,time &t2){
    time t;
    t.second= t2.second+t1.second;
    t.minute=t2.minute+t1.second;
    t.hour= t2.hour+t1.hour;
    cout<<t
    return t;
}

time::time(int h , int m,int s){
   
    second=(s%60);
    minute=((m+s/60)%60);
    hour=((h+(m+s/60)/60)%24);
    cout<<"Time is : "<<hour<<":"<<minute<<":"<<second<<endl;
}
time::time()
{
    hour=0;
    minute=0;
    second=0;
}

time::~time()
{
}

int main(){
    time t1(25,62,63);
    time t2;
    time t=t1+t2;
    cout<<t;

}
