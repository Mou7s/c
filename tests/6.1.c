#include <stdio.h>
#include <stdlib.h>

// 定义结构体存储培养皿信息
struct PetriDish
{
    int id;      // 编号
    int before;  // 试验前细菌数量
    int after;   // 试验后细菌数量
    double rate; // 繁殖率
};

// 比较函数，用于排序
int cmp(const void *a, const void *b)
{
    struct PetriDish *p1 = (struct PetriDish *)a;
    struct PetriDish *p2 = (struct PetriDish *)b;
    if (p1->rate < p2->rate)
    {
        return -1;
    }
    else if (p1->rate > p2->rate)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    struct PetriDish *A = (struct PetriDish *)malloc(n * sizeof(struct PetriDish)); // 存储A亚种的培养皿
    struct PetriDish *B = (struct PetriDish *)malloc(n * sizeof(struct PetriDish)); // 存储B亚种的培养皿
    int cntA = 0, cntB = 0;                                                         // 记录A亚种和B亚种的数量
    for (int i = 0; i < n; i++)
    {
        int id, before, after;
        scanf("%d%d%d", &id, &before, &after);
        double rate = (double)after / before;
        if (rate >= 2)
        { // 繁殖率大于等于2的为A亚种
            A[cntA].id = id;
            A[cntA].before = before;
            A[cntA].after = after;
            A[cntA].rate = rate;
            cntA++;
        }
        else
        { // 繁殖率小于2的为B亚种
            B[cntB].id = id;
            B[cntB].before = before;
            B[cntB].after = after;
            B[cntB].rate = rate;
            cntB++;
        }
    }
    qsort(A, cntA, sizeof(struct PetriDish), cmp); // 按繁殖率升序排列A亚种的培养皿
    qsort(B, cntB, sizeof(struct PetriDish), cmp); // 按繁殖率升序排列B亚种的培养皿
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
