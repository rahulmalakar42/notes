#include <stdio.h>
#include <stdlib.h>

void bubblesort(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int stop = 0, temp = 0;
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                stop = 1;
            }
        }
        if (stop == 0)
        {
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}

int main()
{

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    bubblesort(arr, 10);

    return 0;
}