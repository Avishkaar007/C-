#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

struct Student
{
    int Roll_No;
    string Name;
    int Class;
    int Year;
    float Total_Marks;
    void print(){
        cout<<Roll_No<<" "<<Name<<Class<<" "<<Year<<" "<<Total_Marks<<endl;
    }
};
void read_file(Student &Stu1){
    cin>>Stu1.Roll_No>>Stu1.Name>>Stu1.Class>>Stu1.Year>>Stu1.Total_Marks;

}
void write_file(ofstream &fo,Student &Stu1){
    fo<<Stu1.Roll_No<<' '<<Stu1.Name<<' '<<Stu1.Class<<' '<<Stu1.Year<<' '<<Stu1.Total_Marks<<endl;
    
}
int main(){
    Student Stu1;
    cout<<"Roll_No"<<setw(10)<<"Name"<<setw(8)<<"Class"<<setw(5)<<"Year"<<setw(12)<<"Total Marks"<<endl;
    
    ofstream fo;
    fo.open("25_o.txt");
    if(!fo)
    {
        cerr<<"\a Error opening Output File\n";
        exit(100);
    }
    
    for(int a=0;a<2;a++){
        cout<<"Enter Student "<<a+1<<" data :"<<endl;
        read_file(Stu1);
        write_file(fo,Stu1);
    }

    fo.close();
    cout<<"Data inputted Successfully";
    
}
    
//For sake of time , I have taken only 2 students
/*
"Content of file 25_o.txt"
1 Abhishek 12 1 421
2 Ajay 12 1 432
*/