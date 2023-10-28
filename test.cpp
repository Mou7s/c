#include <iostream>
#include <string>
using namespace std;

const int ESPRESSO_PRICE = 25;
const int DARKROAST_PRICE = 20;
const int MOCHA_PRICE = 10;
const int WHIP_PRICE = 8;

class Beverage
{
protected:
    string description;

public:
    virtual string getDescription() { return description; }
    virtual int cost() = 0;
};

class CondimentDecorator : public Beverage
{
protected:
    Beverage *beverage;

public:
    virtual string getDescription() = 0;
};

class Espresso : public Beverage
{
public:
    Espresso() { description = "Espresso"; }
    int cost() { return ESPRESSO_PRICE; }
};

class DarkRoast : public Beverage
{
public:
    DarkRoast() { description = "DarkRoast"; }
    int cost() { return DARKROAST_PRICE; }
};

class Mocha : public CondimentDecorator
{
public:
    Mocha(Beverage *beverage) { this->beverage = beverage; }
    string getDescription() { return beverage->getDescription() + ", Mocha"; }
    int cost() { return MOCHA_PRICE + beverage->cost(); }
};

class Whip : public CondimentDecorator
{
public:
    Whip(Beverage *beverage) { this->beverage = beverage; }
    string getDescription() { return beverage->getDescription() + ", Whip"; }
    int cost() { return WHIP_PRICE + beverage->cost(); }
};

int main()
{
    Beverage *beverage = new DarkRoast();
    beverage = new Mocha(beverage);
    beverage = new Whip(beverage);
    cout << beverage->getDescription() << " ￥" << beverage->cost() << endl;
    return 0;
}