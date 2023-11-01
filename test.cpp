// 策略模式，不同的促销模式

#include <iostream>
using namespace std;
enum TYPE
{
    NORMAL,
    CASH_DISCOUNT,
    CASH_RETURN
};

class CashSuper
{
public:
    virtual double acceptCash(double money) = 0;
};

class CashNormal : public CashSuper
{
public:
    double acceptCash(double money)
    {
        return money;
    }
};

class CashDiscount : public CashSuper
{
private:
    double moneyDiscount; // 折扣
public:
    CashDiscount(double discount)
    {
        moneyDiscount = discount;
    }

    double acceptCash(double money)
    {
        return money * moneyDiscount;
    };
};

class CashReturn : public CashSuper
{
private:
    double moneyCondition; // 满多少
    double moneyReturn;    // 返多少
public:
    CashReturn(double condition, double moneyReturn)
    {
        this->moneyCondition = condition;
        this->moneyReturn = moneyReturn;
    };

    double acceptCash(double money)
    {
        double result = money;
        if (money >= moneyCondition)
        {
            result = money - (int)(money / moneyCondition) * moneyReturn;
        }
        return result;
    };
};

class CashContext
{

private:
    CashSuper *cs;

public:
    CashContext(TYPE type)
    {
        switch (type)
        {
        case NORMAL:
            cs = new CashNormal();
            break;
        case CASH_RETURN:
            cs = new CashReturn(300, 100);
            break;
        case CASH_DISCOUNT:
            cs = new CashDiscount(0.8);
            break;

        default:
            break;
        }
    };

    double getResult(double money)
    {
        return cs->acceptCash(money);
    };
};

int main()
{
    CashContext *cc = new CashContext(CASH_RETURN);
    double result = cc->getResult(1000);
    cout << result << endl;
    return 0;
}