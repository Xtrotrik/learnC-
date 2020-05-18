#include<iostream>
#include<string>

using namespace std;

class school
{
public:
    int rollno,mobileno,q=0;
    string name;
};

main()
{
    school std1;


    cout<<"Name";
    cin>>std1.name;

    if(std1.name.length()>=5 && std1.name.length()<=10 )
    {
        cout<<std1.name;
    }
    else
    {
        cout<<"Error";
    }

    cout<<"Roll number";
    cin>>std1.rollno;


    if(std1.rollno>=1 && std1.rollno<=60)
    {
        cout<<std1.rollno;
    }

    else
    {
        cout<<"Error";
    }


    cout<<"Mobile";
    cin>>std1.mobileno;

    if(std1.mobileno==10)
    {
        cout<<std1.mobileno;
    }
    else
    {
        cout<<"Error";
    }

}
