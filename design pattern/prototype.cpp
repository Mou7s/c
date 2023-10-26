#include <iostream>
#include <string>
#include <map>

using namespace std;

// 原型基类
class Prototype
{
public:
    virtual Prototype *clone() = 0;
    virtual void show() = 0;
};

// 具体原型类
class ConcretePrototype : public Prototype
{
private:
    string data;

public:
    ConcretePrototype(string data) : data(data) {}

    // 克隆方法，返回一个新的对象
    Prototype *clone()
    {
        return new ConcretePrototype(data);
    }

    void show()
    {
        cout << "ConcretePrototype: " << data << endl;
    }
};

// 原型管理器
class PrototypeManager
{
private:
    map<string, Prototype *> prototypes;

public:
    void addPrototype(string key, Prototype *prototype)
    {
        prototypes[key] = prototype;
    }

    Prototype *getPrototype(string key)
    {
        if (prototypes.find(key) != prototypes.end())
        {
            return prototypes[key]->clone();
        }
        return nullptr;
    }
};

int main()
{
    // 创建原型管理器
    PrototypeManager manager;

    // 添加具体原型对象
    manager.addPrototype("object1", new ConcretePrototype("Data for Object 1"));

    // 克隆对象
    Prototype *clonedObject = manager.getPrototype("object1");

    if (clonedObject)
    {
        clonedObject->show();
    }
    else
    {
        cout << "Prototype not found." << endl;
    }

    return 0;
}
