#include <iostream>
#include <string>
#include <vector>

using namespace std; // 使用using指令简化代码

class ChatMediator; // 前向声明 ChatMediator 类

class User
{
public:
    User(const string &name, ChatMediator *mediator);

    void sendMessage(const string &message);

    void receiveMessage(const string &message);

private:
    string name;
    ChatMediator *mediator;
};

class ChatMediator
{
public:
    virtual void sendMessage(User *user, const string &message) = 0;
};

class ConcreteMediator : public ChatMediator
{
public:
    void addUser(User *user)
    {
        users.push_back(user);
    }

    void sendMessage(User *user, const string &message)
    {
        for (User *u : users)
        {
            if (u != user)
            {
                u->receiveMessage(message);
            }
        }
    }

private:
    vector<User *> users;
};

// User 类的成员函数实现
User::User(const string &name, ChatMediator *mediator) : name(name), mediator(mediator)
{
}

void User::sendMessage(const string &message)
{
    mediator->sendMessage(this, message);
}

void User::receiveMessage(const string &message)
{
    cout << name << " received message: " << message << endl;
}

int main()
{
    ConcreteMediator mediator;

    User alice("Alice", &mediator);
    User bob("Bob", &mediator);
    User charlie("Charlie", &mediator);

    mediator.addUser(&alice);
    mediator.addUser(&bob);
    mediator.addUser(&charlie);

    alice.sendMessage("Hello, everyone!");
    bob.sendMessage("Hi, Alice!");
    charlie.sendMessage("Hey there!");

    return 0;
}
