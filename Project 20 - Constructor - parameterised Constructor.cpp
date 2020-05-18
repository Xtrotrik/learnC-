#include<iostream>
#include<string>

using namespace std;
class student
{
    public:
    int age;
    string name;
    string Validity;

    student(int a, string n)
    {
        age=a;
        name=n;

        if(a>=18 && a<=60)
        {
            Validity = "+1";
        }
        else
        {
            Validity="-1";
        }


    }
};
main()
{
    student s(18,"chinmay");

    cout<<"name"<<s.name<<"\n"<<"age"<<s.age<<"\n"<<"validity"<<s.Validity<<"\n";
}
