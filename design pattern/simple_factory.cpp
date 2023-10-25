#include <iostream>
using namespace std;

// 基类
class Animal
{
public:
    virtual void speak() = 0;
};

// 具体类1
class Dog : public Animal
{
public:
    void speak() override
    {
        cout << "汪汪汪!" << endl;
    }
};

// 具体类2
class Cat : public Animal
{
public:
    void speak() override
    {
        cout << "喵喵喵!" << endl;
    }
};

// 工厂类
class AnimalFactory
{
public:
    Animal *createAnimal(int choice)
    {
        switch (choice)
        {
        case 1:
            return new Dog();
        case 2:
            return new Cat();
        default:
            return nullptr;
        }
    }
};

int main()
{
    AnimalFactory factory;

    Animal *pet1 = factory.createAnimal(1);
    pet1->speak();

    Animal *pet2 = factory.createAnimal(2);
    pet2->speak();

    return 0;
}
