#include <iostream>
using namespace std;

int main(){
    int a;
    int cnt=1;
    cout<<"Enter number of lines : ";
    cin>>a;
    while(cnt<=a){
        
        for(int cnt_inner=1;cnt_inner<(2*cnt);cnt_inner++){
            cout<<"*";
        }
        cout<<endl;
        cnt++;
    }
    return 0;
}

/* OUTPUT
Enter number of lines : 6
*
***
*****
*******
*********
***********
*/