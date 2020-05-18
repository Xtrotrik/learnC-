#include<iostream>
#include<string>

using namespace std;

main()
{

    string studentname;
    string surname;
    string Fname;

    char f,r;


    cout<<"STUDENT NAME: \n";
    getline(cin,studentname);


    cout<<"SUR NAME: \n";
    getline(cin,surname);

    cout<<"FULL NAME\n";
    Fname=studentname+surname;
    cout<<Fname<<"\n";

    cout<<"Find \n";
    cin>>f;

    cout<<"Replace  \n";
    cin>>r;

    for(int i=0; i<Fname.length(); i++)
    {
        if(Fname[i]==f)
        {
            Fname[i]=r;
        }
    }
    cout<<Fname<<"\n";

    cout<<"length  ";
    cout<<Fname.length();
}
