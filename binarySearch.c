#include <stdio.h>
int binary(int[], int, int);
int main()
{
    system("cls");
    int arr[20], i, n, res = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int num;
    printf("Enter element to find: ");
    scanf("%d", &num);
    res = binary(arr, n, num);
    if (res == 1)
        printf("Element found");
    else
        printf("Element not found");
    return 0;
}

int binary(int arr[], int n, int num)
{
    int mid, high, low;
    high = arr[n - 1];
    low = arr[0];
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == num)
            return 1;
        else if (num > arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return 0;
}
