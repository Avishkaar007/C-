#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main(){
    ifstream fi;
    fi.open("25_o.txt");
    if(!fi)
    {
        cerr<<"\a Error opening Input File\n";
        exit(100);
    }
    char aChar;

    int Roll_No;
    string Name;
    int Class;
    int Year;
    float Total_Marks;
      cout << "RollNo " << setw(12) << left << "Name"
     << "Marks" << endl;
    while(fi>>Roll_No>>Name>>Class>>Year>>Total_Marks){
        
        cout << setw(7) << left << Roll_No
       << setw(12) << left << Name
       << Total_Marks << endl;
        cout<<endl;
    }
}

/* OUTPUT
RollNo Name        Marks
1      Abhishek    421

2      Ajay        432
*/