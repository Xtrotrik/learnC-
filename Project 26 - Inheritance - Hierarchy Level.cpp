#include<iostream>
#include<string>

using namespace std;

class organization
{

private:
    string orgName; ///== B&B Cop;
    string registrationNo; ///== 8/760;
    string ceo;/// == Bob Washman;
    string founder; ///== BRB bros;
    int i,j;

    void getPattern()
    {
        for(i=1; i<=1; i++)
        {
            for(j=0; j<=20; j++)
            {
                cout<<"*";
            }
            cout<<"\n";
        }
    }

    string getOrgname()
    {
        return orgName;
    }

    string getRegno()
    {
        return registrationNo;
    }

    string getCeo()
    {
        return ceo;
    }

    string getFounder()
    {
        return founder;
    }

protected:

    void displayOrg()
    {
        getPattern();
        cout<<"Organiztion : "<<getOrgname()<<"\n";
        cout<<"Regestrition No : "<<getRegno()<<"\n";
        cout<<"CEO : "<<getCeo()<<"\n";
        cout<<"Founder : "<<getFounder()<<"\n";
        getPattern();
    }
};

class workers : public organization
{
private:
    string Workername,batchNo;
    int age;

    void setWorkerName()
    {
        cout<<"Worker's Name \n";
        getline(cin,Workername);
    }

    string getWorkerName()
    {
        return Workername;
    }

    void setAge()
    {
        cout<<"Age\n";
        cin>>age;
    }

    int getAge()
    {
        return age;
    }

    void setBatchNo()
    {
        cout<<"Batch No";
        cin.get();
        getline(cin,batchNo);
    }

    string getBatchNo()
    {
        return batchNo;
    }

protected:
    void setWorker()
    {
        setWorkerName();
        setAge();
        setBatchNo();
    }

    void getWorker()
    {
        cout<<"Worker's Name: "<<getWorkerName();
        cout<<"Worker's Age :"<<getAge();
        cout<<"Worker's Batch :"<<getBatchNo();
    }

};

class engineer : public workers
{

private:

    string department,mob;
    int salary;

    void setDepartment()
    {
        cout<<"Name of the Department";
            getline(cin,department);
    }

    string getDepartment()
    {
        return department;
    }

    void setmob()
    {
        cout<<"Mobile";
            getline(cin,mob);
    }

    string getmob()
    {
        return mob;
    }

    void setsalary()
    {
        cout<<"Salary";
        cin>>salary;
    }

    int getsalary()
    {
        return salary;
    }

    void setEngineer()
    {
        setDepartment();
        setmob();
        setsalary();
    }

    void getEngineer()
    {
        cout<<"Department Name : "<<getDepartment();
        cout<<"Mobile : "<<getmob();
        cout<<"Salary : "<<getsalary();
    }

public:

    void fullOrg()
    {
        displayOrg();
        setWorker();
        setEngineer();
        getWorker();
        getEngineer();
    }

};

class labours : public workers
{
    int workingDays;
    string Loctions;

    void setWorkingdays()
    {
        cout<<"Days";
        cin>>workingDays;
    }

    int getWorkingdays()
    {
        return workingDays;
    }

    void setLoctions()
    {
        cout<<"Sites";
        cin.get();
        getline(cin,Loctions);
    }

    string getLoctions()
    {
        return Loctions;
    }

    void setlabour()
    {
        setWorkingdays();
        setLoctions();

    }

    void getlabour()
    {
       cout<<"Working days: " <<getWorkingdays();
       cout<<"Working Locations:  "<<getLoctions();
    }

public:
    void fullOrg()
    {
        displayOrg();
        cin.get();
        setWorker();
        setlabour();
        getWorker();
        getlabour();
    }

};

main()
{

    engineer e;
    e.fullOrg();

    labours l;
    l.fullOrg();

}
