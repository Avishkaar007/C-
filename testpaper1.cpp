#include <iostream>
using namespace std;
int tespaper2()
{
    
    int x=0,y=0,z=1;
    if(z<x||y >= z && z==1)
    {
        if(z&&y)
        y=1;
        else
        x=1;
    }
    cout<<"\nx="<<x<<"\ny="<<y<<"\nz="<<z;
    

   //2
   /*
        char ch;
        cout<<"Enter character ";
        cin>>ch;
        switch(ch)
        {
            case 97 ... 122 :
            {cout <<"Small Letter"  << endl;
            break;}
            case 65 ... 90 :
            
            {cout<<"Capital Letter";
            break;}
        
            case 48 ... 57 :
            {cout<<"Digit";
            break;}
        
            default:cout<<"any other character \n";
        }
    */
   //3

}



int main()



{  //1
     /* int countA=0,countE=0,countI=0;
    char ch;
    cout<<"Enter character ";
    cin>>ch;
    switch(ch)
    {
        case ('A') :
        case ('a'):{countA++;
                   break;}
        case ('E') :
        case ('e'):{countE++;
                   break;}
        case ('I') :
        case ('i'):{countI++;
                   break;}
        default:cout<<"Error-Not A,E, or I\n";
    }*/


    //5
    
    int i,j;
        for(i=10;i>=0;i--)
        {
            cout<<'\n';
                for (j=i;j>=0 && j!=5;j--)
                {
                    cout<<j;
                    if (j==5) 
                    break;
                }

        }
    
   /*
   int arr[]={1,2,3,4,5,6,7,8,9};
   int *ptr1,*ptr2;
   ptr1=arr;
   ptr2=ptr1+2;
   cout<<ptr2-ptr1;
    

   int lines=5;
   for (int line=lines;line>0;line--)
   {
       for(int num=1;num<=2*line;num+=2)
       {
           cout<<num;
       }
       
       cout<<endl;
   }
*/
tespaper2();

    return 0;
}