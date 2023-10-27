#include <iostream>
using namespace std;

class BrakeBehavior
{
public:
    virtual void stop() = 0;
};

class LongWheelBrake : public BrakeBehavior
{
public:
    void stop() { cout << "模拟长轮胎刹车痕迹!" << endl; }
};

class ShortWheelBrake : public BrakeBehavior
{
public:
    void stop() { cout << "模拟短轮胎刹车痕迹!" << endl; }
};

class Car
{
protected:
    BrakeBehavior *wheel;

public:
    void brake() { wheel->stop(); }
};

class ShortWheelCar : public Car
{
public:
    ShortWheelCar(BrakeBehavior *behavior)
    {
        wheel = behavior;
    }
};

int main()
{
    BrakeBehavior *brake = new ShortWheelBrake();
    ShortWheelCar car(brake);
    car.brake();
    return 0;
}