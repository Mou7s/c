#include <iostream>
using namespace std;

// 产品类
class Product
{
public:
    void setPartA(const string &partA)
    {
        this->partA = partA;
    }

    void setPartB(const string &partB)
    {
        this->partB = partB;
    }

    void setPartC(const string &partC)
    {
        this->partC = partC;
    }

    void show()
    {
        cout << "Part A: " << partA << endl;
        cout << "Part B: " << partB << endl;
        cout << "Part C: " << partC << endl;
    }

private:
    string partA;
    string partB;
    string partC;
};

// 构建器类
class Builder
{
public:
    virtual void buildPartA() = 0;
    virtual void buildPartB() = 0;
    virtual void buildPartC() = 0;
    virtual Product getResult() = 0;
};

// 具体构建器类
class ConcreteBuilder : public Builder
{
public:
    ConcreteBuilder()
    {
        product = new Product();
    }

    void buildPartA() override
    {
        product->setPartA("Part A of the product");
    }

    void buildPartB() override
    {
        product->setPartB("Part B of the product");
    }

    void buildPartC() override
    {
        product->setPartC("Part C of the product");
    }

    Product getResult() override
    {
        return *product;
    }

private:
    Product *product;
};

// 导演类
class Director
{
public:
    void construct(Builder &builder)
    {
        builder.buildPartA();
        builder.buildPartB();
        builder.buildPartC();
    }
};

int main()
{
    ConcreteBuilder builder;
    Director director;
    director.construct(builder);
    Product product = builder.getResult();

    product.show();

    return 0;
}
