#include <iostream>
#include <string>
#include <cstring>
using namespace std;
void menu(){
string str1;
cout<<"Enter <String_1>";
cin>>str1;

int len1=str1.length();
int op;
string str2="Bye";
cout<<"What operation you want ";
cin>>op;

switch (op)
{
case 1:
    {for(int i=0;i<len1;i++)
        {  
            cout<<str1[i]<<" "<<(&str1+i)<<endl;
        }//for
    break;
    }//case1
case 2: //concatenation without strcat
    {
        
        str1.append(str2);
        cout<<str1;
    }//case2

case 3: //concatenation using strcat
    {
        strcat(str1,str2);
        cout<<str1;
    }//case3
case 4:
{
int res=str1.compare(str2);
if (res==0)
{
    cout<<"Equal Strings. "<<endl;
}
else if(res==1)
{
    cout<<"Not Equal Strings. "<<endl;
}
}//case4

default:
    break;
}
}//menu
int main()
{
menu();
}