void bubbleSort(int arr[], int len)
{
    int temp, swapped;
    for (int i = 0; i < len - 1; i++)
    {
        swapped = 0;
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0)
        {
            break;
        }
    }
}