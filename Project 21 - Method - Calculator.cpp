#include<iostream>

using namespace std;

class calculator
{
    public :
    int value1,value2;
    char op;
        ///setter
    void ip()
    {
        cout<<"value1"<<"\n";
        cin>>value1;
        cout<<"value2"<<"\n";
        cin>>value2;
        cout<<"choose your OP";
        cin.get();
        cin>>op;
    }
        ///getter
    void process()
    {
        switch(op)
        {
        case '+':
            cout<<value1 + value2;
            break;

        case '-':
            cout<<value1 - value2;
            break;

        case '*':
            cout<<value1 * value2;
            break;

        case '/':
            cout<<value1 / value2;
            break;

        default:
            cout<<"Retry";
        }
    }
};

main()
{
    calculator c;
    c.ip();
    c.process();
}
