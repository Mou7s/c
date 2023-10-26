#include <iostream>
using namespace std;

class BrakeBehavior
{
public:
    virtual void stop() = 0; // (1) 纯虚函数声明
                             // 其余代码省略
};

class LongWheelBrake : public BrakeBehavior
{
public:
    void stop() { cout << "模拟长轮胎刹车痕迹!" << endl; }
    // 其余代码省略
};

class ShortWheelBrake : public BrakeBehavior
{
public:
    void stop() { cout << "模拟短轮胎刹车痕迹!" << endl; }
    // 其余代码省略
};

class Car
{
protected:
    BrakeBehavior *wheel; // (2) 声明指向 BrakeBehavior 的指针
public:
    void brake()
    {
        wheel->stop(); // (3) 调用制动行为
    }
    // 其余代码省略
};

class ShortWheelCar : public Car
{
public:
    ShortWheelCar(BrakeBehavior *behavior)
    {
        wheel = behavior; // (4) 初始化制动行为
    }
    // 其余代码省略
};

int main()
{
    BrakeBehavior *brake = new ShortWheelBrake();
    ShortWheelCar car1(brake);

    car1.brake(); // (5) 调用汽车的刹车函数

    delete brake; // 释放内存
    return 0;
}
