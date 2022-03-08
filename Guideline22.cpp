#include <iostream>
#include <string>
using namespace std;
class Person
{   protected:
    string name;
    int age;
    char gender; // 'F/M'
    public:
    Person();
    Person(string Name, int Age,char Gender);
    ~Person(){cout<<"### Person destroyed ###"<<endl;}
    void display();

};

Person::Person(){
  
    name="Person_Name";
    age=10;
    gender='M';
    cout<<"### Person created by default ###"<<endl;
}

Person::Person(string Name, int Age,char Gender){
    name = Name;
    age=Age ;
    gender= Gender ;
     cout<<"### Person created by value ###"<<endl;
}
void Person::display(){
    cout<<"Name of the person : "<<name<<"\nAge of the person : "<<age<<endl<<"Gender of person : "<<gender<<endl<<'\n';
}
class Teacher:public Person 
{
    string subject;   // assuming subject to be unique trait of teacher
    public:
        Teacher();
        Teacher(string subj);
        ~Teacher(){cout<<"### Teacher destroyed ###"<<endl;}
        void display();
        
};
Teacher::Teacher(){
    subject="Default_Teacher";
    cout<<"### Teacher created by default ###"<<endl;
}

Teacher::Teacher(string subj){
    subject=subj;
    
    cout<<"### Teacher created by value ###"<<endl;
}



void Teacher::display(){
    //cout<<"\nName of the Teacher : "<<name<<"\nAge of the Teacher : "<<age<<endl<<"Gender of Teacher: "<<gender<<endl;
    cout<<"Subject taught : "<<subject<<endl;
}
class Student:public Person
{
    int grade;   // assuming grades to be unique trait of student
    public:
        Student();
        Student(int standard);
        ~Student(){cout<<"### Student Destroyed ###"<<endl;}
        void display();
};

Student::Student(){
    grade=0; // default grade
    cout<<"### Student created by default ### "<<endl;

}

Student::Student(int standard){
    grade=standard;
      cout<<"### Student created by values ### "<<endl;
}



void Student::display(){
    //cout<<"\nName of the Student : "<<name<<"\nAge of the Student : "<<age<<endl<<"Gender of Student : "<<gender<<endl;
    cout<<"Student studying in class : "<<grade<<endl;
}

int main(){
    Person p("Apple",11,'M');
    p.display();
    Person p1;
   
    p1.display();
    Teacher t("English");
    t.display();
    Student s(11);
    s.display();

}

/* OUTPUT
### Person created by value ###
Name of the person : Apple
Age of the person : 11
Gender of person : M

### Person created by default ###  
Name of the person : Person_Name   
Age of the person : 10
Gender of person : M

### Person created by default ###  
### Teacher created by value ###   
Subject taught : English
### Person created by default ###  
### Student created by values ###  
Student studying in class : 11     
### Student Destroyed ###
### Person destroyed ###
### Teacher destroyed ###
### Person destroyed ###
### Person destroyed ###
### Person destroyed ###
*/
