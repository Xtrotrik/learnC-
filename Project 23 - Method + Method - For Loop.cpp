#include<iostream>

using namespace std;

class pattern
{
    public:
    int i,j;
    void f1()
    {
        for(i=1; i<=5; i++)
        {
            f2();
            space();
        }
    }

    void space()
    {
        cout<<"\n";
    }

    void f2()
    {
        for(j=0; j<i; j++)
        {
            star();
        }
    }

    void star()
    {
        cout<<"*";
    }

    void run()
    {
        f1();
    }
};

main()
{
    pattern p;
    p.run();
}
