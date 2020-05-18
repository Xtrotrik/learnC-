#include<iostream>
#include<string>

using namespace std;

class marks
{
    public:

    int phy,chem,maths,t,a;

    void mphy()
    {
        cout<<"phy";
        cin>>phy;
    }

    int gphy()
    {
        return phy;
    }

    void mchem()
    {
            cout<<"chem";
            cin>>chem;
    }

    int gchem()
    {
        return chem;
    }

    void mmaths()
    {
        cout<<"maths";
            cin>>maths;
    }

    int gmaths()
    {
        return maths;
    }

    void mtotal()
    {
        t=phy+chem+maths;
    }

    int gtotal()
    {
        return t;
    }

    void mavg()
    {
        a=t/3;
    }

    int gavg()
    {
        return a;
    }

    void mks()
    {
        mphy();
        mchem();
        mmaths();
    }

    void ta()
    {
        mtotal();
        mavg();
    }

    void print()
    {
        cout<<"phy : "<<gphy();
        cout<<"chem : "<<gchem();
        cout<<"maths: "<<gmaths();
        cout<<"total : "<<gtotal();
        cout<<"avg : "<<gavg();
    }

};
class student : public marks
{
    public:

    string name;
    int Rno;

    void sname()
    {
        cout<<"Name";
        cin.get();
        getline(cin,name);
    }

    string gname()
    {
        return name;
    }

    void rollno()
    {
        cout<<"R. No";
        cin>>Rno;
    }

    int gRno()
    {
        return Rno;
    }

    void ip()
    {
        sname();
        rollno();
        mks();
        ta();

    }

    void op()
    {

        cout<<"Name"<<gname();
        cout<<"Roll Number"<<gRno();
        print();

    }

    void run()
    {
        ip();
        op();
    }
};

main()
{
    student s;
    s.run();
}
