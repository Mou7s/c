#include <iostream>
using namespace std;

// 抽象产品类
class Product
{
public:
    virtual void display() = 0;
};

// 具体产品类A
class ConcreteProductA : public Product
{
public:
    void display() override
    {
        cout << "Product A" << endl;
    }
};

// 具体产品类B
class ConcreteProductB : public Product
{
public:
    void display() override
    {
        cout << "Product B" << endl;
    }
};

// 抽象工厂类
class Factory
{
public:
    virtual Product *createProduct() = 0;
};

// 具体工厂类A
class ConcreteFactoryA : public Factory
{
public:
    Product *createProduct() override
    {
        return new ConcreteProductA();
    }
};

// 具体工厂类B
class ConcreteFactoryB : public Factory
{
public:
    Product *createProduct() override
    {
        return new ConcreteProductB();
    }
};

int main()
{
    Factory *factoryA = new ConcreteFactoryA();
    Factory *factoryB = new ConcreteFactoryB();

    Product *productA = factoryA->createProduct();
    Product *productB = factoryB->createProduct();

    productA->display();
    productB->display();

    delete productA;
    delete productB;

    return 0;
}
