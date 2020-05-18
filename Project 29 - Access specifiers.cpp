#include<iostream>
#include<string>

using namespace std;

class person
{
private:
    string name;
    int age;

    void setName()
    {
        cout<<"Name";
        cin>>name;
    }

    string getName()
    {
        return name;
    }

    void displayPerson()
    {
        setName();
        cout<<getName();
    }

public:
    void play()
    {
        displayPerson();
    }
};

main()
{
    person s;
    s.play();
}
