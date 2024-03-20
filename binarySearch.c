// 1 - Binary Search

#include <stdio.h>
int binary(int arr[], int n, int num);
int main()
{
    int arr[20], i, n;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter elements: \n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int num;
    printf("Enter element to search: ");
    scanf("%d", &num);
    int res = binary(arr, n, num);
    if (res != -1)
        printf("\nElement found at index %d", res);
    else
        printf("\nElement not found");
    return 0;
}

int binary(int arr[], int n, int num)
{
    int high = n - 1;
    int low = 0;
    while (low <= high)
    {
        int mid = (high + low) / 2;
        if (arr[mid] == num)
            return mid;
        else if (num > arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}