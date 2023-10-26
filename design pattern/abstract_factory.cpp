#include <iostream>
using namespace std;

// 抽象产品类
class AbstractProduct
{
public:
    virtual void display() = 0;
};

// 具体产品类 A
class ConcreteProductA : public AbstractProduct
{
public:
    void display() override
    {
        cout << "具体产品A" << endl;
    }
};

// 具体产品类 B
class ConcreteProductB : public AbstractProduct
{
public:
    void display() override
    {
        cout << "具体产品B" << endl;
    }
};

// 抽象工厂类
class AbstractFactory
{
public:
    virtual AbstractProduct *createProduct() = 0;
};

// 具体工厂类 1
class ConcreteFactory1 : public AbstractFactory
{
public:
    AbstractProduct *createProduct() override
    {
        return new ConcreteProductA();
    }
};

// 具体工厂类 2
class ConcreteFactory2 : public AbstractFactory
{
public:
    AbstractProduct *createProduct() override
    {
        return new ConcreteProductB();
    }
};

int main()
{
    // 使用具体工厂 1 创建产品
    AbstractFactory *factory1 = new ConcreteFactory1();
    AbstractProduct *product1 = factory1->createProduct();
    product1->display();

    // 使用具体工厂 2 创建产品
    AbstractFactory *factory2 = new ConcreteFactory2();
    AbstractProduct *product2 = factory2->createProduct();
    product2->display();

    delete factory1;
    delete factory2;
    delete product1;
    delete product2;

    return 0;
}
