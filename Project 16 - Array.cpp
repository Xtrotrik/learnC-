#include<iostream>

using namespace std;

main()
{
    int i,marks[3],t=0,a=0;

    for(i=0; i<3; i++)
    {
        cout<<"Enter Marks \n ";
        cin>>marks[i];
        t+=marks[i];
    }
    cout<<"Total \n" <<t;

    a=t/3;

    cout<<"Avg \n" <<a;

    if(a<=100 && a>=0)
    {
        if(a>=80)
        {
            cout<<"A \n";
        }

          else if(a>=50)
        {
            cout<<"B \n";
        }

        else
        {
            cout<<"F \n";
        }

    }
    else
    {
        cout<<"ERROR \n";
    }
}
