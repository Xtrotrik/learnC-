#include<iostream>

using namespace std;

main()
{
    char a;
    int b,c,d;

    cout<<"Choose Your Case";
    cin>>a;

    switch(a)
    {
    case '+':
        cout<<"Enter Value\n";
        cin>>b;
        cout<<"Enter Value\n";
        cin>>c;
        cout<<"Processing\n";
        d=b+c;
        cout<<"Addtion\n" <<d<< "\n ";


    case '-':

        cout<<"Enter Value\n";
        cin>>b;
        cout<<"Enter Value\n";
        cin>>c;
        cout<<"Processing\n";
        d=b-c;
        cout<<"subtration\n" <<d<< "\n ";


    case '*':

        cout<<"Enter Value\n";
        cin>>b;
        cout<<"Enter Value\n";
        cin>>c;
        cout<<"Processing\n";
        d=b*c;
        cout<<"multiplcation\n" <<d<< "\n ";

    case '/':

        cout<<"Enter Value\n";
        cin>>b;
        cout<<"Enter Value\n";
        cin>>c;
        cout<<"Processing\n";
        d=b/c;
        cout<<"divition\n" <<d<< "\n ";
    }
}

