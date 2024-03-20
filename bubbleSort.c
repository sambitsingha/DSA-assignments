#include <stdio.h>
void sort(int[], int);
int main()
{
    int arr[20], i, n;
    printf("Enter size: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    sort(arr, n);
    printf("Sorted array is: ");
    for (i = 0; i < n; i++)
        printf("%d\t", i);
    return 0;
}
void sort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}