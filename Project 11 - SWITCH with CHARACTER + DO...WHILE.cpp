
#include<iostream>

using namespace std;

main()
{
    char a;
    int b,c,d,Z=1;

    do
    {
        cout<<"Enter Value\n";
        cin>>b;
        cout<<"Enter Value\n";
        cin>>c;
        cout<<"Choose Your Case";
        cin>>a;

        switch(a)
        {
        case '+':
            cout<<"Processing\n";
            d=b+c;
            cout<<"Addtion\n" <<d<< "\n ";
            break;


        case '-':
            cout<<"Processing\n";
            d=b-c;
            cout<<"subtration\n" <<d<< "\n ";
            break;


        case '*':


            cout<<"Processing\n";
            d=b*c;
            cout<<"multiplcation\n" <<d<< "\n ";
            break;

        case '/':

            cout<<"Processing\n";
            d=b/c;
            cout<<"divition\n" <<d<< "\n ";
            break;

        default:
            cout<<"ERROR\n";

        }
        cout<<"Press 1 to retry";
        cin>>Z;
    }
 while(Z==1);
}
