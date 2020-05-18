#include<iostream>
#include<string>

using namespace std;

class person
{
public:

    string name;
    int age;
    string sex;



    void setName()
    {
        cout<<"Name \n";
        getline(cin,name);

        while(name.length()>=20)
        {
            cout<<"retry";
            getline(cin,name);
        }
    }

    string getName()
    {
        return name;
    }

    void setAge()
    {
        cout<<"Age \n";
        cin>>age;

        while(age < 22 || age > 45)
        {
            cout<<"retry";
            cin>>age;
        }
    }

    int getAge()
    {
        return age;
    }

    void setSex()
    {
        cout<<"Sex \n";
        cin.get();
        getline(cin,sex);
        while(sex != "f" && sex != "m")
       {
           cout<<"Retry \n";
           getline(cin,sex);
        }
    }

    string getSex()
    {
        return sex;
    }

    void setPerson()
    {
        setName();
        setAge();
        setSex();
    }

    void getPerson()
    {
        cout<<"Name"<<getName();
        cout<<"Age"<<getAge();
        cout<<"Sex"<<getSex();
    }


};

class org : public person
{
public:
    string batchno;
    int salary;
    string post,engineer,clark,manager,Operator;


    void setBatch()
    {
        cout<<"BatchNo";
        cin.get();
        getline(cin,batchno);

        while(batchno.length() >=10)
        {
            cout<<"Failed \n";
            getline(cin,batchno);
        }
    }

    string getBatch()
    {
        return batchno;
    }

    void setSalary()
    {
        cout<<"Enter Salary \n";
        cin>>salary;
    }

    int getSalary()
    {
        return salary;
    }

    void setPost()
    {
        cout<<"Enter Post";
        cin.get();
        getline(cin,post);

        while(post != "engineer" && post != "clark" && post != "manager" && post != "Operator")
        {
            cout<<"Enter Correct : ";
            getline(cin,post);
        }
    }

    string getPost()
    {
        return post;
    }


    void setOrg()
    {
        setBatch();
        setSalary();
        setPost();
    }

    void getOrg()
    {
        cout<<"Batch NO"<<getBatch();
        cout<<"Salary"<<getSalary();
        cout<<"Post"<<getPost();
    }

};

class database : public org

{
public:
    string promtionDate;
    string lastDay;
    string report;

    void setPromotion()
    {
        cout<<"Promotion";
        cin.get();
        getline(cin,promtionDate);

        while(promtionDate.length()>=10)
        {
            cout<<"retry";
            getline(cin,promtionDate);
        }
    }

    string getPromotion()
    {
        return promtionDate;
    }

    void setLastday()
    {
        cout<<"Lastdate on work";
        cin.get();
        getline(cin,lastDay);

        while(lastDay.length()>=10)
        {
            cout<<"retry";
            getline(cin,lastDay);
        }
    }

    string getLastday()
    {
        return lastDay;
    }

    void setReport()
    {
        cout<<"report";
        cin.get();
        getline(cin,report);

        while(report.length()>=120)
        {
            cout<<"retry";
            getline(cin,report);
        }
    }

    string getreport()
    {
        return report;
    }

    void setDatabase()
    {
        setPromotion();
        setLastday();
        setReport();
    }

    void getDatabase()
    {
        cout<<"Promotion"<<getPromotion();
        cout<<"Lastday"<<getLastday();
        cout<<"Report"<<getreport();
    }

    void organization()
    {
        setPerson();
        setOrg();
        setDatabase();
        getPerson();
        getOrg();
        getDatabase();
    }
};

main()
{
    database d;
    d.organization();
}

