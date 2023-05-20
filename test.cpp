#include <iostream>
using namespace std;

// 抽象产品类
class Product
{
public:
    virtual void use() = 0;
};

// 具体产品类A
class ProductA : public Product
{
public:
    void use()
    {
        cout << "ProductA is used." << endl;
    }
};

// 具体产品类B
class ProductB : public Product
{
public:
    void use()
    {
        cout << "ProductB is used." << endl;
    }
};

// 工厂类
class Factory
{
public:
    Product *createProduct(int type)
    {
        switch (type)
        {
        case 1:
            return new ProductA();
            break;
        case 2:
            return new ProductB();
            break;
        default:
            return NULL;
        }
    }
};

// 客户端
int main()
{
    Factory factory;
    Product *productA = factory.createProduct(1);
    productA->use();

    Product *productB = factory.createProduct(2);
    productB->use();

    return 0;
}
