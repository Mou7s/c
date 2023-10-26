#include <iostream>

class Singleton
{
public:
    // 获取单例实例的静态方法
    static Singleton &getInstance()
    {
        // 使用局部静态变量保证线程安全的延迟初始化
        static Singleton instance;
        return instance;
    }

    // 其他成员函数
    void doSomething()
    {
        std::cout << "Singleton is doing something." << std::endl;
    }

private:
    // 私有构造函数，防止外部创建实例
    Singleton() {}

    // 防止拷贝构造和赋值操作
    Singleton(const Singleton &) = delete;
    Singleton &operator=(const Singleton &) = delete;
};

int main()
{
    // 获取单例实例
    Singleton &singleton = Singleton::getInstance();

    // 使用单例实例
    singleton.doSomething();

    return 0;
}
