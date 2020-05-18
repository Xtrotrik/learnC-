#include<iostream>

using namespace std;

main()
{
    int i,marks[3],t=0,a=0,j;

    for(i=0; i<3; i++)
    {
        t=0;
          for(j=0; j<3; j++)
        {
            cout<<"Enter Marks \n ";
            cin>>marks[i];
            t+=marks[i];
        }
        cout<<"Total \n" <<t<<"\n";
        a=t/3;

    cout<<"Avg \n" <<a<<"\n";

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

    }

