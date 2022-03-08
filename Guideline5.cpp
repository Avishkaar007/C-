#include <iostream>
#include <string>

using namespace std;

//To check pallindrome using function
string check_pallindrome(string s)
{  
    int len =s.length();
    
    for(int cnt=0;cnt<len;cnt++)
    {
        if (s[cnt]==s[len-cnt-1]){
            continue;
        }//if
        return "\nNot a Pallindrome";
    }
    return "\nIs a pallindrome";
}

int main()
{
    string s;
    cout<<"Enter String to check pallindrome : ";
    cin>>s;
    cout<<check_pallindrome(s);


}

/* OUTPUT
Enter String to check pallindrome : apple

Not a Pallindrome

Enter String to check pallindrome : radar

Is a pallindrome
*/

