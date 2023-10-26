namespace myNamespace
{
    int var = 5;
}

int main()
{
    int var = 10;
    int nsVar = myNamespace::var; // 访问命名空间中的变量
    return 0;
}
