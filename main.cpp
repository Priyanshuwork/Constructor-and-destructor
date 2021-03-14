#include <iostream>
#include <stdlib.h>
using namespace std;
class area
{
     int base,radius,height,a,b,choice1,choice2,choice3;
     float area1,area2,area3;
 public:
    area()
    {
         cout<<"What you want first? 1.Circle 2.Triangle 3.Rectangle\n";
    cin>>choice1;
    if(choice1==1)
    {
        cout<<"Give the RADIUS of the CIRCLE\t";
        cin>>radius;
        area1= 3.14*radius*radius;
        cout<<"The AREA of the CIRCLE is\t: "<<area1;
        cout<<"\nNow what you want?\n";
        cin>>choice2;
        if(choice2==2)
            {
                cout<<"Give the HEIGHT and BASE of TRIANGLE\n";
                cin>>height>>base;
                area2= 0.5*base*height;
                cout<<"\nThe AREA of TRIANGLE is: \t"<<area2;
                cout<<"AND\n";
                cout<<"\nGive the SIDES of the RECTANGLE\n";
                cin>>a>>b;
                area3= a*b;
                cout<<"\nAREA of the SQUARE is: \t"<<area3;
            }
            else if(choice2==3)
                {
              cout<<"\nGive the SIDES of the RECTANGLE\n";
              cin>>a>>b;
              area3=a*b;
              cout<<"\nAREA of the RECTANGLE is: \t"<<area3;
              cout<<"\nAND\n";
              cout<<"Give the BASE and HEIGHT of the TRIANGLE:\t";
              cin>>base>>height;
              area2=0.5*base*height;
              cout<<"\nAREA of TRIANGLE is: \t"<<area2;
            }
            else
                cout<<"\nInvalid\n";
            }
       else if(choice1==2)
       {
           cout<<"\nGive the HEIGHT and BASE of TRIANGLE:\t";
                cin>>height>>base;
                area2= 0.5*base*height;
                cout<<"\nThe AREA of TRIANGLE is: \t"<<area2;
      cout<<"\nWhat else you want?\n";
      cin>>choice2;
      if(choice2==1)
        {
           cout<<"\nRADIUS of the CIRCLE: \t";
           cin>>radius;
           area1=3.14*radius*radius;
           cout<<"AREA of the CIRCLE:\t"<<area1;
           cout<<"\nAND\n";
           cout<<"\nSIDES of the RECTANGLE:\t";
           cin>>a>>b;
           area3= a*b;
           cout<<"\nAREA of the RECTANGLE:\t"<<area3;
       }
       else if(choice2==3)
       {
           cout<<"\nSIDES of the RECTANGLE is: \t";
           cin>>a>>b;
           area3=a*b;
           cout<<"\nAREA of the RECTANGLE is: \t"<<area3;
           cout<<"\nAND\n";
           cout<<"\nRADIUS of the CIRCLE: \t";
           cin>>radius;
           area1= 3.14*radius*radius;
           cout<<"\nAREA of the CIRCLE: \t"<<area1;
           }
           else
            cout<<"\nInvalid\n";
       }
    else if(choice1==3)
    {
           cout<<"\nSIDES of the RECTANGLE is: \t";
           cin>>a>>b;
           area3=a*b;
           cout<<"\nAREA of the RECTANGLE is: \t"<<area3;
           cout<<"\nWhat next you want?\n";
           cin>>choice2;
           if(choice2==2)
           {
                cout<<"\nGive the HEIGHT and BASE of TRIANGLE:\t";
                cin>>height>>base;
                area2= 0.5*base*height;
                cout<<"\nThe AREA of TRIANGLE is: \t"<<area2;
                cout<<"\nAND\n";
                cout<<"\nRADIUS of the CIRCLE: \t";
                cin>>radius;
                area1= 3.14*radius*radius;
                cout<<"\nAREA of the CIRCLE is: \t"<<area1;
           }
           else
            cout<<"\nInvalid\n";
           }
           cout<<"\nWant to do once more?\n 1. YES 2.NO\n";
           cin>>choice3;
           if(choice3==1){
                }
           else
            cout<<"\nEND\n";
    }
    void get()
    {
        cout<<"\nEND OF THE PROGRAMME\n";

    if(choice1==1)
    {
        cout<<"\nGive the RADIUS of the CIRCLE\t";
        cin>>radius;
        area1= 3.14*radius*radius;
        cout<<"The AREA of the CIRCLE is\t: "<<area1;
        cout<<"\nNow what you want?\n";
        cin>>choice2;
        if(choice2==2)
            {
                cout<<"Give the HEIGHT and BASE of TRIANGLE\n";
                cin>>height>>base;
                area2= 0.5*base*height;
                cout<<"\nThe AREA of TRIANGLE is: \t"<<area2;
                cout<<"AND\n";
                cout<<"\nGive the SIDES of the RECTANGLE\n";
                cin>>a>>b;
                area3= a*b;
                cout<<"\nAREA of the SQUARE is: \t"<<area3;
            }
            else if(choice2==3)
                {
              cout<<"\nGive the SIDES of the RECTANGLE\n";
              cin>>a>>b;
              area3=a*b;
              cout<<"\nAREA of the RECTANGLE is: \t"<<area3;
              cout<<"\nAND\n";
              cout<<"Give the BASE and HEIGHT of the TRIANGLE:\t";
              cin>>base>>height;
              area2=0.5*base*height;
              cout<<"\nAREA of TRIANGLE is: \t"<<area2;
            }
            else
                cout<<"\nInvalid\n";
            }
       else if(choice1==2)
       {
           cout<<"\nGive the HEIGHT and BASE of TRIANGLE:\t";
                cin>>height>>base;
                area2= 0.5*base*height;
                cout<<"\nThe AREA of TRIANGLE is: \t"<<area2;
      cout<<"\nWhat else you want?\n";
      cin>>choice2;
      if(choice2==1)
        {
           cout<<"\nRADIUS of the CIRCLE: \t";
           cin>>radius;
           area1=3.14*radius*radius;
           cout<<"AREA of the CIRCLE:\t"<<area1;
           cout<<"\nAND\n";
           cout<<"\nSIDES of the RECTANGLE:\t";
           cin>>a>>b;
           area3= a*b;
           cout<<"\nAREA of the RECTANGLE:\t"<<area3;
       }
       else if(choice2==3)
       {
           cout<<"\nSIDES of the RECTANGLE is: \t";
           cin>>a>>b;
           area3=a*b;
           cout<<"\nAREA of the RECTANGLE is: \t"<<area3;
           cout<<"\nAND\n";
           cout<<"\nRADIUS of the CIRCLE: \t";
           cin>>radius;
           area1= 3.14*radius*radius;
           cout<<"\nAREA of the CIRCLE: \t"<<area1;
           }
           else
            cout<<"\nInvalid\n";
       }
    else if(choice1==3)
    {
           cout<<"\nSIDES of the RECTANGLE is: \t";
           cin>>a>>b;
           area3=a*b;
           cout<<"\nAREA of the RECTANGLE is: \t"<<area3;
           cout<<"\nWhat next you want?\n";
           cin>>choice2;
           if(choice2==2)
           {
                cout<<"\nGive the HEIGHT and BASE of TRIANGLE:\t";
                cin>>height>>base;
                area2= 0.5*base*height;
                cout<<"\nThe AREA of TRIANGLE is: \t"<<area2;
                cout<<"\nAND\n";
                cout<<"\nRADIUS of the CIRCLE: \t";
                cin>>radius;
                area1= 3.14*radius*radius;
                cout<<"\nAREA of the CIRCLE is: \t"<<area1;
           }
           else
            cout<<"\nInvalid\n";
           }
           else
            cout<<"END\n";
    }

    ~area()
    {
        cout<<"\nDESTRUCTOR CALLED!";
    }

};

int main(void)
{
 system ("CLS");
 area obj;
 obj.get();
    return 0;
}
