#include<iostream>
#include<string>

using namespace std;

class person
{
private:
    string name,bgroup;
    int age;

    void setName()
    {
        cout<<"Name \n";
        getline(cin,name);

        while(name.length() >=15)
        {
            cout<<"Retry";
            getline(cin,name);
        }
    }

    string getName()
    {
        return name;
    }

    void setAge()
    {
        cout<<"Age";
        cin>>age;

        while(age < 23 && age > 45 )
        {
            cout<<"Retry";
            cin>>age;
        }
    }

    int getAge()
    {
        return age;
    }

    void setBgroup()
    {
        cout<<"Blood Group";
        cin.get();
        getline(cin,bgroup);

        while(bgroup != "a" && bgroup != "b" )
        {
            cout<<"Enter Correct Blood ";
            getline(cin,bgroup);
        }
    }

    string getBgroup()
    {
        return bgroup;
    }

    void setPerson()
    {
        setName();
        setAge();
        setBgroup();
    }

    void getPerson()
    {
        getName();
        getAge();
        getBgroup();
    }

    public:

    void proceesPerson()
    {
        setPerson();
        getPerson();
    }
};

class doctor : public person
{
private:

    string post,batchNo;

    void setPost()
    {
        cout<<"Post";
        cin.get();
        getline(cin,post);

        while(post != "MBBS" && post != "DHMS" && post != "MD" && post != "SURGEON" )
        {
            cout<<"Retry";
            getline(cin,post);
        }
    }

    string getPost()
    {
        return post;
    }

    void setBatchno()
    {
        cout<<"BatchNo";
        cin.get();
        getline(cin,batchNo);

        while(batchNo.length() >=7)
        {
            cout<<"Retry";
            getline(cin,batchNo);
        }

    }

    string getBatchno()
    {
        return batchNo;
    }

    void setDoctor()
    {
     setPost();
     setBatchno();
    }

    void getDoctor()
    {
    cout<<"Post"<<getPost();
    cout<<"BatchNo"<<getBatchno();
    }

public:

    void processDoctor()
    {
       setDoctor();
       getDoctor();
    }

    void run()
    {
        proceesPerson();
        processDoctor();

    }
};

main()
{
    doctor s;
    s.run();
}


