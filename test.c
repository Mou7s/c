#include <stdio.h>
#include <stdlib.h> // 用于动态内存分配函数

// 定义结构体
struct Student
{
    char *name;
    int age;
    float gpa;
};

int main()
{
    int numStudents = 3;

    // 动态分配内存来存储学生信息的数组
    struct Student *studentDB = (struct Student *)malloc(numStudents * sizeof(struct Student));

    // 初始化学生信息
    studentDB[0].name = "Alice";
    studentDB[0].age = 20;
    studentDB[0].gpa = 3.8;

    studentDB[1].name = "Bob";
    studentDB[1].age = 22;
    studentDB[1].gpa = 3.5;

    studentDB[2].name = "Charlie";
    studentDB[2].age = 21;
    studentDB[2].gpa = 3.9;

    // 打印学生信息
    printf("Student Database:\n");
    printf("Name\tAge\tGPA\n");

    for (int i = 0; i < numStudents; i++)
    {
        printf("%s\t%d\t%.2f\n", studentDB[i].name, studentDB[i].age, studentDB[i].gpa);
    }

    // 释放分配的内存
    free(studentDB);

    return 0;
}
