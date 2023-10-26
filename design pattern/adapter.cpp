#include <iostream>
using namespace std;

// 目标接口
class SquarePeg
{
public:
    virtual void insertIntoHole() = 0;
};

// 适配者类
class RoundPeg
{
public:
    void insertIntoHole()
    {
        cout << "Round peg inserted into hole." << endl;
    }
};

// 适配器类
class SquarePegAdapter : public SquarePeg
{
private:
    RoundPeg *roundPeg;

public:
    SquarePegAdapter(RoundPeg *peg)
    {
        roundPeg = peg;
    }

    void insertIntoHole()
    {
        roundPeg->insertIntoHole();
    }
};

int main()
{
    RoundPeg *roundPeg = new RoundPeg();
    SquarePeg *squarePeg = new SquarePegAdapter(roundPeg);
    squarePeg->insertIntoHole();

    delete roundPeg;
    delete squarePeg;

    return 0;
}
