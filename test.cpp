#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Observer
{
public:
    virtual void update() = 0;
};

class Subject
{
protected:
    vector<Observer *> myObs;

public:
    virtual void Attach(Observer *obs) { myObs.push_back(obs); }
    virtual void Detach(Observer *obs)
    {
        for (vector<Observer *>::iterator iter = myObs.begin(); iter != myObs.end(); iter++)
        {
            if (*iter == obs)
            {
                myObs.erase(iter);
                return;
            }
        }
    }
    virtual void Notify()
    {
        for (vector<Observer *>::iterator iter = myObs.begin(); iter != myObs.end(); iter++)
        {
            (*iter)->update();
        }
    }
    virtual int getStatus() = 0;
    virtual void setStatus(int status) = 0;
};

class OfficeDoc : public Subject
{
private:
    string mySubjectName;
    int m_status;

public:
    OfficeDoc(string name) : mySubjectName(name), m_status(0) {}
    void setStatus(int status) { m_status = status; }
    int getStatus() { return m_status; }
};

class DocExplorer : public Observer
{
private:
    string myObsName;
    Subject *mySubject;

public:
    DocExplorer(string name, Subject *sub) : myObsName(name), mySubject(sub)
    {
        mySubject->Attach(this);
    }
    ~DocExplorer()
    {
        mySubject->Detach(this);
    }
    void update() override
    {
        cout << "update observer: " << myObsName << endl;
    }
};

int main()
{
    Subject *subjectA = new OfficeDoc("subject A");
    Observer *observerA = new DocExplorer("observer A", subjectA);
    subjectA->setStatus(1);
    subjectA->Notify();
    return 0;
}