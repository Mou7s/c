#include <iostream>
#include <string>

using namespace std;

// 抽象产品类
class Product
{
public:
    virtual void use() = 0;
};

// 具体产品类A
class ConcreteProductA : public Product
{
public:
    void use() override
    {
        cout << "Using ConcreteProductA" << endl;
    }
};

// 具体产品类B
class ConcreteProductB : public Product
{
public:
    void use() override
    {
        cout << "Using ConcreteProductB" << endl;
    }
};

// 简单工厂类
class SimpleFactory
{
public:
    Product *createProduct(string type)
    {
        if (type == "A")
        {
            return new ConcreteProductA();
        }
        else if (type == "B")
        {
            return new ConcreteProductB();
        }
        else
        {
            return nullptr;
        }
    }
};

int main()
{
    SimpleFactory factory;
    Product *productA = factory.createProduct("A");
    Product *productB = factory.createProduct("B");
    productA->use();
    productB->use();
    delete productA;
    delete productB;
    return 0;
}
