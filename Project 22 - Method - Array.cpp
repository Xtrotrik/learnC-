#include<iostream>
#include<String>

using namespace std;

class student
{
public:
    int age;
    int rollNo,phy,chem,maths,t,a;
    string name ;

///setter

    void input()
    {

        cout<<"Full Name"<<"\n";
        cin.get();
        getline(cin,name);

        while(name.length()>=15)
        {
            cout<<"retry";
            getline(cin,name);
        }

        cout<<"Roll no"<<"\n";
        cin>>rollNo;

        while(rollNo < 1 || rollNo > 60 )
        {
            cout<<"retry";
            cin>>rollNo;
        }

        cout<<"phy"<<"\n";
        cin>>phy;

        while(phy <1 || phy >100 )
        {
            cout<<"retry";
            cin>>phy;
        }


        cout<<"chem"<<"\n";
        cin>>chem;

        while(chem <1 || chem >100 )
        {
            cout<<"retry";
            cin>>chem;
        }


        cout<<"maths"<<"\n";
        cin>>maths;

        while(maths <1 || chem >100 )
        {
            cout<<"retry";
            cin>>maths;
        }

        t=phy+chem+maths;
        a=t/3;
    }

    void output()
    {
        cout<<"Name"<<" "<<name<<"\n";
        cout<<"rollNo"<<" "<<rollNo<<"\n";
        cout<<"phy"<<" "<<phy<<"\n";
        cout<<"chem"<<" "<<chem<<"\n";
        cout<<"maths"<<" "<<maths<<"\n";
        cout<<"total"<<" "<<t<<"\n";
        cout<<"avg"<<" "<<a<<"\n";

        if(a>=70)
        {
            cout<<"A"<<"\n";
        }

        else if(a>=50)
        {
            cout<<"b"<<"\n";
        }

        else
        {
            cout<<"C"<<"\n";
        }
    }
};

main()
{
    student s[3];

    for(int i=0; i<3; i++)
    {
        s[i].input();
    }
    for(int i=0; i<3; i++)
    {
        s[i].output();
    }
}
