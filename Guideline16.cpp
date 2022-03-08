#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
using namespace std;
void menu(string & strA,string & strB){
int len2=sizeof(strB);
char str2[len2+1];
strcpy(str2,strB.c_str());
int len1=sizeof(strA);
char str1[len1+1];
strcpy(str1,strA.c_str());

cout<<"What operation you want : ";
int op;
cin>>op;

switch (op)
{
case 1:
    {   int i=0;
    cout<<"Adress of first string characters : "<<endl;
        while (strA[i]!='\0')
        {   
            cout<<strA[i]<<" "<<(&strA+i*sizeof(strA[0]))<<endl;
            i++;
        }//for
    menu(strA,strB);
    break;
    }//case1
case 2: //concatenation without strcat
    {
        string str3[len1+len2];
        int pos=0;
    
        for(int a=0;(a<len1)&&(strA[a]!='\0');a++)
        {
            str3[pos]=strA[a];
            pos++;
        }
        for(int a=0;(a<len2)&&(strB[a]!='\0');a++)
        {
            str3[pos]=strB[a];
            pos++;
        }
        str3[pos]=="\0";
        cout<<"Concatenated without strcat : ";
       
        for(int a=0;(a<len2+len1);a++){cout<<str3[a];}
        cout<<endl;
        menu(strA,strB);
        break;
    }//case2

case 3: //concatenation using strcat
    {
        strcat(str1,str2);
        cout<<str1<<endl;
        menu(strA,strB);
        break;
    }//case3
case 4:
{
int res=strA.compare(strB);
if (res==0){cout<<"Equal Strings. "<<endl; }
else if(res!=0){cout<<"Not Equal Strings. "<<endl;}
menu(strA,strB);
break;
}//case4
case 5: //length using pointers
{
    char* ptrA=&str1[0];
    int cnt=0;
    int sizeA=sizeof(str1[0]);
    for(int a=0;(*(ptrA+(a*sizeA))!='\0');a++)
    {
        cnt++;
    }
    cout<<"Length of StrA = "<<cnt<<endl;
    menu(strA,strB);
    break;
}//case 5
case 6: // toupper
{
    for(int a=0;a<len1;a++){
    char ch=toupper(str1[a]);
    str1[a]=ch;}
    cout<<str1<<endl;
    menu(strA,strB);
    break;
}
case 7:
{
    for(int a=0;a<len1;a++){
    char ch=tolower(str1[a]);
    str1[a]=ch;
    }
    cout<<str1<<endl;
    menu(strA,strB);
    break;

}
case 8: 
{   int cnt=0;
    for(int a=0;(a<len1)&&(strA[a]!='\0');a++){
        if((strA[a]=='a')||(strA[a]=='A')||(strA[a]=='e')||(strA[a]=='E')||(strA[a]=='i')||(strA[a]=='I')||(strA[a]=='o')||(strA[a]=='O')||(strA[a]=='u')||(str1[a]=='U'))
        {cnt++;}
    }
    cout<<"Count of Vowels : "<<cnt<<endl;
    menu(strA,strB);
    break;
}
case 9:
{
    string str3=strA;
    int len=str3.length();
    for(int a=0;(a<len+1)&&(strA[a]!='\0');a++)
    {
        str3[a]=strA[len-a-1];
    }
    cout<<"Reversed String is : "<<endl;
    for(int a=0;a<len+1;a++){cout<<str3[a];}
    cout<<endl;
    menu(strA,strB);
    break;
}
default:
    break;
}
}//menu
int main()
{
    
cout<<"Enter first string : ";
string strA;

getline(cin,strA);

cout<<"Enter second string : ";
string strB;
getline(cin,strB);
cout<<"--------------------------------------------------------------------------------------------------"<<endl;
cout<<"1: Show address of each character    2: Concatenate without strcat    3: Concatenate with strcat\n";
cout<<"4: Compare two strings               5: Length using pointers         6: Lowercase to uppercase\n";
cout<<"7: Upper to lower case               8: No of vowels                  9: Reverse the string"<<endl;
cout<<"--------------------------------------------------------------------------------------------------"<<endl;
menu(strA,strB);
}


/* OUTPUT
  Enter first string : Able was I
Enter second string : demo
---------------------------------------------------------------------
1: Show address of each character    2: Concatenate without strcat    3: Concatenate with strcat
4: Compare two strings               5: Length using pointers         6: Lowercase to uppercase
7: Upper to lower case               8: No of vowels                  9: Reverse the string
--------------------------------------------------------------------------------------------------
What operation you want : 1
Adress of first string characters :
A 0x61fef8
b 0x61ff10
l 0x61ff28
e 0x61ff40
  0x61ff58
w 0x61ff70
a 0x61ff88
s 0x61ffa0
  0x61ffb8
I 0x61ffd0
What operation you want : 2
Concatenated without strcat : Able was Idemo
What operation you want : 3
Able was Idemo
What operation you want : 4
Not Equal Strings.
What operation you want : 5
Length of StrA = 10
What operation you want : 6
ABLE WAS I
What operation you want : 7
able was i
What operation you want : 8
Count of Vowels : 4
What operation you want : 9
Reversed String is :
I saw elbA
*/