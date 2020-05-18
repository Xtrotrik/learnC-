#include<iostream>
#include<string>

using namespace std;
class student
{
public:
    int age;
    string name;

    student() {}

};
main()
{
    student s;

    cout<<"Name";
    cin>>s.name;

    cout<<"age";;
    cin>>s.age;

    if(s.age>=18 && s.age<=60)
    {
        cout<<"You allow to vote";
    }
    else
    {
        cout<<"You can't go to vote";
    }


}

