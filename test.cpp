#include <iostream>
#include <string>
using namespace std;

class DrawCircle
{
    // 绘制圆形，抽象类
public:
    DrawCircle(int radius, int x, int y) {}
    virtual ~DrawCircle() {}
};

class RedCircle : public DrawCircle
{
    // 绘制红色圆形
public:
    RedCircle(int radius, int x, int y) : DrawCircle(radius, x, y) {}
    void drawCircle(int radius, int x, int y)
    {
        cout << "Drawing Circle[red, radius: " << radius;
        cout << ", x: " << x << ", y: " << y << "]" << endl;
    }
};

class GreenCircle : public DrawCircle
{
    // 绘制绿色圆形
public:
    GreenCircle(int radius, int x, int y) : DrawCircle(radius, x, y) {}
    void drawCircle(int radius, int x, int y)
    {
        cout << "Drawing Circle[green, radius: " << radius;
        cout << ", x: " << x << ", y: " << y << "]" << endl;
    }
};

class Shape
{
    // 形状，抽象类
protected:
    DrawCircle *drawCircle;

public:
    Shape(DrawCircle *drawCircle)
    {
        this->drawCircle = drawCircle;
    }
    virtual ~Shape() {}
    virtual void draw() = 0;
};

class Circle : public Shape
{
    // 圆形
private:
    int x, y, radius;

public:
    Circle(int x, int y, int radius, DrawCircle *drawCircle) : Shape(drawCircle)
    {
        this->x = x;
        this->y = y;
        this->radius = radius;
    }
    void draw()
    {
        drawCircle->drawCircle(radius, x, y);
    }
};

int main()
{
    DrawCircle *redCircle = new RedCircle(10, 100, 100);
    DrawCircle *greenCircle = new GreenCircle(10, 100, 100);
    Shape *redShape = new Circle(100, 100, 10, redCircle);
    Shape *greenShape = new Circle(100, 100, 10, greenCircle);
    redShape->draw();   // 绘制红色圆形
    greenShape->draw(); // 绘制绿色圆形


    
    delete redCircle;
    delete greenCircle;
    delete redShape;
    delete greenShape;
    return 0;
}