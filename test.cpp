#include <iostream>
#include <vector>

class Mediator; // 前置声明

// 抽象同事类
class Colleague
{
public:
    Colleague(Mediator *mediator) : mediator(mediator) {}
    virtual void send(std::string message) = 0;
    virtual void receive(std::string message) = 0;

protected:
    Mediator *mediator;
};

// 中介者类
class Mediator
{
public:
    virtual void addColleague(Colleague *colleague) = 0;
    virtual void distributeMessage(Colleague *sender, std::string message) = 0;
};

// 具体同事类
class ConcreteColleague : public Colleague
{
public:
    ConcreteColleague(Mediator *mediator) : Colleague(mediator) {}

    void send(std::string message) override
    {
        std::cout << "发送消息: " << message << std::endl;
        mediator->distributeMessage(this, message);
    }

    void receive(std::string message) override
    {
        std::cout << "收到消息: " << message << std::endl;
    }
};

// 具体中介者类
class ConcreteMediator : public Mediator
{
public:
    void addColleague(Colleague *colleague) override
    {
        colleagues.push_back(colleague);
    }

    void distributeMessage(Colleague *sender, std::string message) override
    {
        for (Colleague *colleague : colleagues)
        {
            if (colleague != sender)
            {
                colleague->receive(message);
            }
        }
    }

private:
    std::vector<Colleague *> colleagues;
};

int main()
{
    ConcreteMediator mediator;
    ConcreteColleague colleague1(&mediator);
    ConcreteColleague colleague2(&mediator);

    mediator.addColleague(&colleague1);
    mediator.addColleague(&colleague2);

    colleague1.send("你好，同事2！");
    colleague2.send("你好，同事1！");

    return 0;
}
