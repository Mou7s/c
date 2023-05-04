#include <stdio.h>
#include <stdlib.h>

// 定义结构体存储培养皿信息
struct Dish
{
    int id;      // 编号
    int before;  // 试验前细菌数量
    int after;   // 试验后细菌数量
    double rate; // 繁殖率
};

// 按繁殖率升序排序
int cmp(const void *a, const void *b)
{
    struct Dish *c = (struct Dish *)a;
    struct Dish *d = (struct Dish *)b;
    return c->rate > d->rate ? 1 : -1;
}

int main()
{
    int n;
    scanf("%d", &n);
    struct Dish *A = (struct Dish *)malloc(n * sizeof(struct Dish)); // 存储A亚种培养皿信息
    struct Dish *B = (struct Dish *)malloc(n * sizeof(struct Dish)); // 存储B亚种培养皿信息
    int cntA = 0, cntB = 0;                                          // 记录A、B亚种培养皿数量
    for (int i = 0; i < n; i++)
    {
        int id, before, after;
        scanf("%d%d%d", &id, &before, &after);
        double rate = (double)after / before; // 计算繁殖率
        if (rate >= 2)
        { // A亚种
            A[cntA].id = id;
            A[cntA].before = before;
            A[cntA].after = after;
            A[cntA].rate = rate;
            cntA++;
        }
        else
        { // B亚种
            B[cntB].id = id;
            B[cntB].before = before;
            B[cntB].after = after;
            B[cntB].rate = rate;
            cntB++;
        }
    }
    // 按繁殖率升序排序
    qsort(A, cntA, sizeof(struct Dish), cmp);
    qsort(B, cntB, sizeof(struct Dish), cmp);
    // 输出结果
    printf("%d\n", cntA);
    for (int i = 0; i < cntA; i++)
    {
        printf("%d\n", A[i].id);
    }
    printf("%d\n", cntB);
    for (int i = 0; i < cntB; i++)
    {
        printf("%d\n", B[i].id);
    }
    free(A);
    free(B);
    return 0;
}
