#include <stdio.h>
void selcSort(int arr[], int n);
void swap(int *x, int *y);
int main()
{
    int arr[20], i, n;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter elements: \n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    selcSort(arr, n);
    printf("Sorted Array is: \n");
    for (i = 0; i < n; i++)
        printf("%d\t", arr[i]);
    return 0;
}

void selcSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        int min = i;
        for (j = i + 1; j, n; j++)
        {
            if (arr[min] < arr[j])
                min = j;
        }
        swap(&arr[min], &arr[i]);
    }
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}