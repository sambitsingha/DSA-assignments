#include <stdio.h>
void insertSort(int arr[], int n);
int main()
{
    int arr[20], i, n;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter elements: \n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    insertSort(arr, n);
    printf("Sorted Array is: \n");
    for (i = 0; i < n; i++)
        printf("%d\t", arr[i]);
    return 0;
}

void insertSort(int arr[], int n)
{
    int i, j;
    for (i = 1; i < n; i++)
    {
        int temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}