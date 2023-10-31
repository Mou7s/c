#include <iostream>

class Singleton
{
private:
    static Singleton *instance;
    Singleton() {} // 私有化构造函数

public:
    static Singleton *getInstance()
    {
        if (instance == nullptr)
        {
            instance = new Singleton();
        }
        return instance;
    }

    void display()
    {
        std::cout << "Singleton instance" << std::endl;
    }
};

// 初始化静态成员变量
Singleton *Singleton::instance = nullptr;

int main()
{
    // 获取 Singleton 实例并调用 display 方法
    Singleton::getInstance()->display();
    return 0;
}