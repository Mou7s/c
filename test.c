// struct 指针

#include <stdio.h>

struct turtle
{
    char *name;
    char *species;
    int age;
};

void happy(struct turtle *t)
{
    t->age = t->age + 1;
    printf("%s is happy!\n", t->name);
}

int main()
{
    struct turtle myrtle = {"Myrtle", "Leatherback sea turtle", 99};
    happy(&myrtle);
    printf("%i\n", myrtle.age);
    return 0;
}