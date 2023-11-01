// 装饰器模式
#include <iostream>

// Component Interface
class Component
{
public:
    virtual void operation() = 0;
};

// Concrete Component
class ConcreteComponent : public Component
{
public:
    void operation() override
    {
        std::cout << "ConcreteComponent operation\n";
    }
};

// Base Decorator
class Decorator : public Component
{
protected:
    Component *component;

public:
    Decorator(Component *c) : component(c) {}
    void operation() override
    {
        if (component)
            component->operation();
    }
};

// Concrete Decorators
class ConcreteDecoratorA : public Decorator
{
public:
    ConcreteDecoratorA(Component *c) : Decorator(c) {}
    void operation() override
    {
        Decorator::operation();
        std::cout << "ConcreteDecoratorA operation\n";
    }
};

class ConcreteDecoratorB : public Decorator
{
public:
    ConcreteDecoratorB(Component *c) : Decorator(c) {}
    void operation() override
    {
        Decorator::operation();
        std::cout << "ConcreteDecoratorB operation\n";
    }
};

int main()
{
    ConcreteComponent cc;
    ConcreteDecoratorA da(&cc);
    ConcreteDecoratorB db(&da);
    db.operation();
    return 0;
}