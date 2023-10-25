#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Colleague; // 前置声明

// 抽象中介者
class Mediator
{
public:
    virtual void sendMessage(const string &message, Colleague *colleague) = 0;
};

// 具体中介者
class ConcreteMediator : public Mediator
{
public:
    void setColleague1(Colleague *colleague);
    void setColleague2(Colleague *colleague);

    virtual void sendMessage(const string &message, Colleague *colleague);

private:
    Colleague *colleague1;
    Colleague *colleague2;
};

// 抽象同事类
class Colleague
{
public:
    Colleague(Mediator *mediator) : mediator(mediator) {}

    virtual void send(const string &message)
    {
        mediator->sendMessage(message, this);
    }

    virtual void receiveMessage(const string &message) = 0;

protected:
    Mediator *mediator;
};

// 定义同事类
class ConcreteColleague1 : public Colleague
{
public:
    ConcreteColleague1(Mediator *mediator) : Colleague(mediator) {}

    virtual void receiveMessage(const string &message)
    {
        cout << "同事1收到消息: " << message << endl;
    }
};

class ConcreteColleague2 : public Colleague
{
public:
    ConcreteColleague2(Mediator *mediator) : Colleague(mediator) {}

    virtual void receiveMessage(const string &message)
    {
        cout << "同事2收到消息: " << message << endl;
    }
};

void ConcreteMediator::setColleague1(Colleague *colleague)
{
    colleague1 = colleague;
}

void ConcreteMediator::setColleague2(Colleague *colleague)
{
    colleague2 = colleague;
}

void ConcreteMediator::sendMessage(const string &message, Colleague *colleague)
{
    if (colleague == colleague1)
    {
        colleague2->receiveMessage(message);
    }
    else if (colleague == colleague2)
    {
        colleague1->receiveMessage(message);
    }
}

int main()
{
    ConcreteMediator mediator;
    ConcreteColleague1 colleague1(&mediator);
    ConcreteColleague2 colleague2(&mediator);

    mediator.setColleague1(&colleague1);
    mediator.setColleague2(&colleague2);

    colleague1.send("你好，同事2！");
    colleague2.send("你好，同事1！");

    return 0;
}
