
#include <iostream>

class Singleton
{
public:
    static Singleton &getInstance()
    {
        static Singleton instance;
        return instance;
    }

    void showMessage()
    {
        std::cout << "Hello, I am a singleton!" << std::endl;
    }

private:
    Singleton() {}
    Singleton(const Singleton &) = delete;
    Singleton &operator=(const Singleton &) = delete;
};

int main()
{
    Singleton &instance = Singleton::getInstance();
    instance.showMessage();
    return 0;
}
