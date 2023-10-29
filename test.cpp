#include <iostream>
#include <string>
using namespace std;

class Light
{
public:
    Light(string name)
    {
        // 代码省略
    }
    void on()
    {
        // 代码省略
    }
    void off()
    {
        // 代码省略
    }
};

class Command
{
public:
    virtual void execute() = 0;
};

class LightOnCommand : public Command
{ // 开灯命令
private:
    Light *light;

public:
    LightOnCommand(Light *light)
    {
        this->light = light;
    }
    void execute()
    {
        light->on();
    }
};

class LightOffCommand : public Command
{ // 关灯命令
private:
    Light *light;

public:
    LightOffCommand(Light *light)
    {
        this->light = light;
    }
    void execute()
    {
        light->off();
    }
};

class RemoteControl
{ // 遥控器
private:
    Command *onCommands[7];
    Command *offCommands[7];

public:
    RemoteControl()
    {
        // 代码省略
    }
    void setCommand(int slot, Command *onCommand, Command *offCommand)
    {
        onCommands[slot] = onCommand;
        offCommands[slot] = offCommand;
    }
    void onButtonWasPushed(int slot)
    {
        onCommands[slot]->execute();
    }
    void offButtonWasPushed(int slot)
    {
        offCommands[slot]->execute();
    }
};

int main()
{
    RemoteControl *remoteControl = new RemoteControl();
    Light *livingRoomLight = new Light("Living Room");
    Light *kitchenLight = new Light("Kitchen");
    LightOnCommand *livingRoomLightOn = new LightOnCommand(livingRoomLight);
    LightOffCommand *livingRoomLightOff = new LightOffCommand(livingRoomLight);
    LightOnCommand *kitchenLightOn = new LightOnCommand(kitchenLight);
    LightOffCommand *kitchenLightOff = new LightOffCommand(kitchenLight);
    remoteControl->setCommand(0, livingRoomLightOn, livingRoomLightOff);
    remoteControl->setCommand(1, kitchenLightOn, kitchenLightOff);
    remoteControl->onButtonWasPushed(0);
    remoteControl->offButtonWasPushed(0);
    remoteControl->onButtonWasPushed(1);
    remoteControl->offButtonWasPushed(1);
    // 其余代码省略
    return 0;
}