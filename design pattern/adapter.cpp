#include <iostream>

// 新接口
class NewInterface
{
public:
    virtual void newMethod() = 0;
    virtual ~NewInterface() {}
};

// 旧接口
class OldInterface
{
public:
    void oldMethod()
    {
        std::cout << "Old Method" << std::endl;
    }
};

// 适配器类
class Adapter : public NewInterface
{
private:
    OldInterface oldObject;

public:
    Adapter(OldInterface old) : oldObject(old) {}

    void newMethod() override
    {
        oldObject.oldMethod();
    }
};

int main()
{
    OldInterface oldObj;
    NewInterface *adapter = new Adapter(oldObj);

    adapter->newMethod();

    delete adapter;

    return 0;
}
