#include <iostream>
using namespace std;

class CState
{
private:
    int flyMiles; // 里程数
public:
    virtual double travel(int miles, class FrequentFlyer *context) = 0; // 根据累积里程数调整会员等级
};

class FrequentFlyer
{
    friend class CBasic;
    friend class CSilver;
    friend class CGold;

private:
    CState *state;
    CState *nocustomer;
    CState *basic;
    CState *silver;
    CState *gold;
    double flyMiles;

public:
    FrequentFlyer()
    {
        flyMiles = 0;
        nocustomer = new CNoCustomer();
        basic = new CBasic();
        silver = new CSilver();
        gold = new CGold();
        setState(nocustomer);
    }
    void setState(CState *state)
    {
        this->state = state;
    }
    void travel(int miles)
    {
        double bonusMiles = state->travel(miles, this);
        flyMiles = flyMiles + bonusMiles;
    }
};

class CNoCustomer : public CState // 非会员
{
public:
    double travel(int miles, FrequentFlyer *context)
    {
        cout << "Your travel will not account for points\n"; // 不累积里程数
        return miles;
    }
};

class CBasic : public CState // 普卡会员
{
public:
    double travel(int miles, FrequentFlyer *context)
    {
        if (context->flyMiles >= 25000 && context->flyMiles < 50000)
        {
            context->setState(context->silver);
        }
        if (context->flyMiles < 25000)
        {
            context->setState(context->basic);
        }
        return miles + 0.5 * miles; // 累积里程数
    }
};

class CGold : public CState // 金卡会员
{
public:
    double travel(int miles, FrequentFlyer *context)
    {
        if (context->flyMiles >= 25000 && context->flyMiles < 50000)
        {
            context->setState(context->silver);
        }
        if (context->flyMiles < 25000)
        {
            context->setState(context->basic);
        }
        return miles + 0.5 * miles; // 累积里程数
    }
};

class CSilver : public CState // 银卡会员
{
public:
    double travel(int miles, FrequentFlyer *context)
    {
        if (context->flyMiles < 25000)
        {
            context->setState(context->basic);
        }
        if (context->flyMiles >= 50000)
        {
            context->setState(context->gold);
        }
        return (miles + 0.25 * miles); // 累积里程数
    }
};