#include<iostream>

using namespace std;

main()
{
    char a;
    int b,c,d,Z=1;

    while(Z==1)

    {
        cout<<"Choose Your Case";
        cin>>a;
        cout<<"Enter Value\n";
        cin>>b;
        cout<<"Enter Value\n";
        cin>>c;

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
            cout<<"ERROR";

        }
        cout<<"Press 1 to retry";
        cin>>Z;
    }

}
