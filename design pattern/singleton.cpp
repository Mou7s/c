#include <iostream>

class Singleton
{
public:
    // 静态成员函数，用于获取唯一的实例
    static Singleton &getInstance()
    {
        static Singleton instance; // 使用静态变量确保只创建一次
        return instance;
    }

    void doSomething()
    {
        std::cout << "Singleton is doing something." << std::endl;
    }

private:
    // 私有构造函数，防止外部创建对象
    Singleton() {}

    // 阻止拷贝构造和赋值操作
    Singleton(const Singleton &) = delete;
    Singleton &operator=(const Singleton &) = delete;
};

int main()
{
    // 获取单例实例
    Singleton &instance = Singleton::getInstance();
    instance.doSomething();

    // 尝试创建新实例，将会引发编译错误
    // Singleton anotherInstance; // 这将无法编译

    return 0;
}
