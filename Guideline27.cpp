#include <fstream>

#include <iostream>
using namespace std;

int main()
{   
    ifstream f1;
    f1.open("1.txt");
    if(!f1)
    {
        cerr<<"\a Error opening Original Files\n";
        exit(100);
    }
    ofstream f2;
    f2.open("2.txt");
    char aChar;
    while(!(f1.eof()))
    {
        f1.get(aChar);
        if (aChar!=' ')
        f2.put(aChar);
    }
    cout<<"File copied Successfully";
    f1.close();
   
    f2.close();
}
/* Content of File 1.txt
"Able Was I    Elba .

Ok "
Content of File 2.txt
"AbleWasIElba.

Ok"
*/