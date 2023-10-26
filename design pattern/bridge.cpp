#include <iostream>

// 实现部分的接口
class Implementor
{
public:
    virtual void operationImpl() = 0;
    virtual ~Implementor() {}
};

// 具体实现部分A
class ConcreteImplementorA : public Implementor
{
public:
    void operationImpl()
    {
        std::cout << "具体实现A" << std::endl;
    }
};

// 具体实现部分B
class ConcreteImplementorB : public Implementor
{
public:
    void operationImpl()
    {
        std::cout << "具体实现B" << std::endl;
    }
};

// 抽象部分的接口
class Abstraction
{
public:
    virtual void operation() = 0;
    virtual ~Abstraction() {}
};

// 具体的抽象部分
class RefinedAbstraction : public Abstraction
{
public:
    RefinedAbstraction(Implementor *impl) : implementor(impl) {}    

    void operation()
    {
        std::cout << "抽象部分的操作：" << std::endl;
        implementor->operationImpl();
    }

private:
    Implementor *implementor;
};

int main()
{
    Implementor *implA = new ConcreteImplementorA();
    Abstraction *absA = new RefinedAbstraction(implA);
    absA->operation();

    Implementor *implB = new ConcreteImplementorB();
    Abstraction *absB = new RefinedAbstraction(implB);
    absB->operation();

    delete absA;
    delete implA;
    delete absB;
    delete implB;

    return 0;
}
