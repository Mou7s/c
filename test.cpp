#include <iostream>
#include <vector>
#include <string>
using namespace std;

// 观察者类
class Observer
{
public:
    // 更新方法，由具体观察者实现
    virtual void update() = 0;
};

// 主题类
class Subject
{
protected:
    vector<Observer *> myObs; // 观察者列表

public:
    // 添加观察者
    virtual void Attach(Observer *obs) { myObs.push_back(obs); }
    // 移除观察者
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
    // 通知所有观察者
    virtual void Notify()
    {
        for (vector<Observer *>::iterator iter = myObs.begin(); iter != myObs.end(); iter++)
        {
            (*iter)->update();
        }
    }
    // 获取状态，由具体主题实现
    virtual int getStatus() = 0;
    // 设置状态，由具体主题实现
    virtual void setStatus(int status) = 0;
};

// 具体主题类
class OfficeDoc : public Subject
{
private:
    string mySubjectName; // 主题名称
    int m_status;         // 主题状态

public:
    OfficeDoc(string name) : mySubjectName(name), m_status(0) {}
    void setStatus(int status) { m_status = status; }
    int getStatus() { return m_status; }
};

// 具体观察者类
class DocExplorer : public Observer
{
private:
    string myobsName; // 观察者名称
    Subject *mySub;   // 观察的主题

public:
    DocExplorer(string name, Subject *sub) : myobsName(name), mySub(sub) { mySub->Attach(this); }
    void update() { cout << "update observer：" << myobsName << endl; }
};

int main()
{
    Subject *subjectA = new OfficeDoc("subject A");                // 创建主题对象
    Observer *observerA = new DocExplorer("observer A", subjectA); // 创建观察者对象并将其绑定到主题上
    subjectA->setStatus(1);                                        // 修改主题状态
    subjectA->Notify();                                            // 通知所有观察者
    return 0;
}
