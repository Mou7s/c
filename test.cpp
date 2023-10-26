#include <iostream>
class MyClass
{
public:
    // 静态成员函数
    static void staticFunction()
    {
        std::cout << "This is a static function." << std::endl;
    }

    // 非静态成员函数
    void nonStaticFunction()
    {
        std::cout << "This is a non-static function." << std::endl;
    }
};

int main()
{
    // 调用静态函数，不需要创建类的实例
    MyClass::staticFunction();

    // 创建类的实例并调用非静态函数
    MyClass obj;
    obj.nonStaticFunction();

    return 0;
}
