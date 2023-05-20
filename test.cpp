#include <iostream>
using namespace std;

// 抽象产品类
class Product
{
public:
    virtual void use() = 0;
};

// 具体产品类 A
class ConcreteProductA : public Product
{
public:
    void use() override
    {
        cout << "Using ConcreteProductA" << endl;
    }
};

// 具体产品类 B
class ConcreteProductB : public Product
{
public:
    void use() override
    {
        cout << "Using ConcreteProductB" << endl;
    }
};

// 工厂类
class Factory
{
public:
    static Product *createProduct(int type)
    {
        switch (type)
        {
        case 1:
            return new ConcreteProductA();
        case 2:
            return new ConcreteProductB();
        default:
            return nullptr;
        }
    }
};

int main()
{
    Product *productA = Factory::createProduct(1);
    Product *productB = Factory::createProduct(2);
    productA->use();
    productB->use();
    delete productA;
    delete productB;
    return 0;
}
