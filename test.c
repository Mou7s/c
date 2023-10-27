#include <stdio.h>
#include <stdlib.h>

void bucketSort(float *data, int size)
{
    // 创建桶并初始化为0
    const int BUCKET_SIZE = 10;
    int bucket[BUCKET_SIZE];
    for (int i = 0; i < BUCKET_SIZE; i++)
    {
        bucket[i] = 0;
    }

    // 将数据分配到桶中
    for (int i = 0; i < size; i++)
    {
        int index = (int)(data[i] * BUCKET_SIZE);
        bucket[index]++;
    }

    // 对每个桶中的数据进行排序
    for (int i = 0; i < BUCKET_SIZE; i++)
    {
        for (int j = 0; j < bucket[i]; j++)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    float data[] = {0.6, 0.4, 0.8, 0.2};
    int size = sizeof(data) / sizeof(data[0]);

    printf("Array before sorting: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%f ", data[i]);
    }

    bucketSort(data, size);

    printf("\nArray after sorting: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%f ", data[i]);
    }
    printf("\n");

    return 0;
}