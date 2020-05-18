#include<iostream>

using namespace std;

main()
{
    int a,b,c,d;

    cout<<"Choose Your Case";
    cin>>a;

    switch(a)
    {
    case 1:
        cout<<"Enter Value\n";
        cin>>b;
        cout<<"Enter Value\n";
        cin>>c;
        cout<<"Processing\n";
        d=b+c;
        cout<<"Addtion\n" <<d;


    case 2:

        cout<<"Enter Value\n";
        cin>>b;
        cout<<"Enter Value\n";
        cin>>c;
        cout<<"Processing\n";
        d=b-c;
        cout<<"subtration\n" <<d;


    case 3:

        cout<<"Enter Value\n";
        cin>>b;
        cout<<"Enter Value\n";
        cin>>c;
        cout<<"Processing\n";
        d=b*c;
        cout<<"multiplcation\n" <<d;

    case 4:

        cout<<"Enter Value\n";
        cin>>b;
        cout<<"Enter Value\n";
        cin>>c;
        cout<<"Processing\n";
        d=b/c;
        cout<<"divition\n" <<d;
    }
}
