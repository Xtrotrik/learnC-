#include<iostream>

using namespace std;

main()
{

int p,c,m,t,q=0;
float a;

while(q==0)
{

    cout<<"Physics \n";
    cin>>p;

    cout<<"Chemistry \n";
    cin>>c;

    cout<<"MATHS \n";
    cin>>m;

    cout<<"Processing \n";

    t=p+c+m;

    cout<<"Total \n" <<t<<"\n" ;

    a=t/3.0;

    cout<<"Avg \n" <<a<<"\n";

    if(a>=0&&a<=100)
    {
        if(a>80)
        {
            cout<<"Grade A \n";
        }
        else if(a>50)
        {
            cout<<"Grade B \n";
        }

        else
        {
            cout<<" YOU ARE FAILED \n";
        }
    }
    else
    {
        cout<<"ERROR \n";
    }

    cout<<"Press 0 to Retry \n";
    cin>>q;

}

}

