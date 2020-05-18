#include<iostream>
#include<string>

using namespace std;

class org
{
private:

    string ORGANIZATION ="Walter Cop.\n";
    string Rno ="B1/643\n";
    string CEO ="Walter White\n";
    int j;

    void pattern()
    {
        for(j=0; j<=20; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

    string getOrg()
    {
        return ORGANIZATION ;
    }

    string getRno()
    {
        return Rno ;
    }

    string getCEO()
    {
        return CEO ;
    }

public:

    void displayOrg()
    {
        pattern();
        cout<<"Organization Name :"<<getOrg();
        cout<<"Registration Number :"<<getRno();
        cout<<"CEO :"<<getCEO();
        pattern();
    }
};

class person : public org
{
private:
    string Name;
    int Age;

    void setPerson()
    {
        cout<<"Employee Name :";
        getline(cin,Name);
    }

    string getPerson()
    {
        return Name;
    }

    void setAge()
    {
        cout<<"Age :";
        cin>>Age;
    }

    int getAge()
    {
        return Age;
    }
public:

    void setProcessPerson()
    {
        setPerson();
        setAge();
    }

    void getProcessPerson()
    {
        cout<<"Name  :"<<getPerson();
        cout<<"AGE   :"<<getAge();
    }

};

class engineer : public person
{
protected:

    string department,firstDay;

    void setDepartment()
    {
        cout<<" Department Name :";
        getline(cin,department);
    }

    string getDepartment()
    {
        return department;
    }

    void setfirstDay()
    {
        cout<<" Date :";
        getline(cin,firstDay);
    }

    string getfirstDay()
    {
        return firstDay;
    }

protected:

    void  setengineer()
    {
        setDepartment();
        setfirstDay();
    }

    void getengineer()
    {
        cout<<"Department"<<getDepartment();
        cout<<"First Day"<<getfirstDay();
    }

    void displayDetail()
    {
        displayOrg();
        setProcessPerson();
        setengineer();
        getProcessPerson();
        getengineer();
    }

public:

    void run()
    {
        displayDetail();
    }

};

class labor : public person
{
protected:

    string location;
    int workingday;

    void setLocation()
    {
        cout<<" Location Name :";
        getline(cin,location);
    }

    string getLocation()
    {
        return location;
    }

    void setDays()
    {
        cout<<" Working days:";
        cin>>workingday;
    }

    int getDays()
    {
        return workingday;
    }
protected:

    void setlabour()
    {
        setLocation();
        setDays();
    }

    void getlabour()
    {
        cout<<"Working Site  :"<<getLocation();
        cout<<"Working Days  :"<<getDays();
    }

    void displayDetail()
    {
        displayOrg();
        setProcessPerson();
        setlabour();
        getProcessPerson();
        getlabour();
    }

public:

    void run()
    {
        displayDetail();
    }
};

class manager : public person,public engineer,public labor
{
protected:
    string report;

    void setReport()
    {
        cout<<"Enter Report";
        getline(cin,report);
    }

    string getReport()
    {
        return report;
    }


    void setmanager()
    {

        setReport();
    }

    void getmanager()
    {
        cout<<"Report  :"<<getReport();
    }

     void displayDetail()
    {
        engineer::displayOrg();
        engineer::setProcessPerson();
        cin.get();
        setDepartment();
        setLocation();
        setmanager();
        engineer::getProcessPerson();
        cout<<"Department"<<getDepartment();
        cout<<"Working Site  :"<<getLocation();
        getmanager();

    }

public:

    void run()
    {
        displayDetail();
    }

};

main()
{
    manager m;
    m.run();
}
