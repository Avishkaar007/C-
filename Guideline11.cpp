#include <iostream>
#include <string>
using namespace std;

int main()
{   int count=0;
    char* table[26];
    string text;
    cout<<"Enter Text to be checked : ";
    getline(cin,text);
    int len=text.length();
    for(int a=97;a<123;a++)
    {
        count=0;
        for (int b=0;b<len;b++){
            if ((text[b]==char(a))||(text[b]==char(a-32)) ){
            count++;
            }//if  
        }
        cout<<"|"<<char(a)<<" : "<<count<<"|"<<"  ";
        if((a)%4==0){
        cout<<endl;
    }
    

}
}

/* OUTPUT
Enter Text to be checked : Able was I saw elba
|a : 4|  |b : 2|  |c : 0|  |d : 0|  
|e : 2|  |f : 0|  |g : 0|  |h : 0|
|i : 1|  |j : 0|  |k : 0|  |l : 2|
|m : 0|  |n : 0|  |o : 0|  |p : 0|
|q : 0|  |r : 0|  |s : 2|  |t : 0|
|u : 0|  |v : 0|  |w : 2|  |x : 0|  
|y : 0|  |z : 0|

*/