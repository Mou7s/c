#include <iostream>
using namespace std;

class FlyBehavior
{
public:
    virtual void fly() = 0;
};

class QuackBehavior
{
public:
    virtual void quack() = 0;
};

class FlyWithWings : public FlyBehavior
{
public:
    void fly() { cout << "使用翅膀飞行!" << endl; }
};

class FlyNoWay : public FlyBehavior
{
public:
    void fly() { cout << "不能飞行!" << endl; }
};

class Quack : public QuackBehavior
{
public:
    void quack() { cout << "发出'嘎嘎'声!" << endl; }
};

class Squeak : public QuackBehavior
{
public:
    void quack() { cout << "发出空气与橡皮摩擦声!" << endl; }
};

class QuackNoWay : public QuackBehavior
{
public:
    void quack() { cout << "不能发声!" << endl; }
};

class Duck
{
protected:
    FlyBehavior *flyBehavior;
    QuackBehavior *quackBehavior;

public:
    void fly() { flyBehavior->fly(); }
    void quack() { quackBehavior->quack(); };
    virtual void display() = 0;
};

class RubberDuck : public Duck
{
public:
    RubberDuck()
    {
        flyBehavior = new FlyNoWay();
        quackBehavior = new Squeak();
    }
    ~RubberDuck()
    {
        if (flyBehavior)
            delete flyBehavior;
        if (quackBehavior)
            delete quackBehavior;
    }
    void display()
    { /*此处省略显示橡皮鸭的代码*/
    }
};

class MallardDuck : public Duck
{
public:
    MallardDuck()
    {
        flyBehavior = new FlyWithWings();
        quackBehavior = new Quack();
    }
    ~MallardDuck()
    {
        if (flyBehavior)
            delete flyBehavior;
        if (quackBehavior)
            delete quackBehavior;
    }
    void display()
    { /*此处省略显示绿头鸭的代码*/
    }
};

int main()
{
    Duck *duck = new MallardDuck();
    duck->fly();
    duck->quack();
    delete duck;
    duck = new RubberDuck();
    duck->fly();
    duck->quack();
    delete duck;
    return 0;
}