#include <iostream>

// 旧的类
class OldLibrary
{
public:
    void oldMethod()
    {
        std::cout << "Old method is called." << std::endl;
    }
};

// 新的接口
class NewInterface
{
public:
    virtual void newMethod() = 0;
};

// 适配器类，继承新接口并包含旧类的实例
class Adapter : public NewInterface
{
private:
    OldLibrary old;

public:
    void newMethod() override
    {
        // 在新接口中调用旧类的方法
        old.oldMethod();
    }
};

int main()
{
    // 使用适配器将旧类适配到新接口
    NewInterface *adapter = new Adapter;
    adapter->newMethod();

    delete adapter;

    return 0;
}
