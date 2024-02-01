// 1 - WAP to find out the mean of n numbers using array

/*#include <stdio.h>
int main()
{
    int a[20], i, n, mean, sum = 0;
    printf("Enter the range: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter %d number: ", i + 1);
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    mean = sum / n;
    printf("\n%d is the mean", mean);
    return 0;
}*/

// 2 -  WAP to find out the largest and smallest element of an array

/*#include <stdio.h>
int main()
{
    int a[20], i, n, max, min;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter %d number: ", i + 1);
        scanf("%d", &a[i]);
    }
    max = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    min = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] < min)
            min = a[i];
    }
    printf("\nThe maximum value in the array is:%d\n", max);
    printf("\nThe minimum value in the array is:%d\n", min);
    return 0;
}*/

// 3 -  WAP to insert a new element at any desired location of a partially filled array

/*#include <stdio.h>
int main()
{
    int a[20], i, n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter %d number: ", i + 1);
        scanf("%d", &a[i]);
    }
    int pos, val;
    printf("Enter position where you want to insert the element:");
    scanf("%d", &pos);
    printf("Enter the value which you want to insert:");
    scanf("%d", &val);
    for (i = n - 1; i >= pos; i--)
        a[i + 1] = a[i];
    a[pos] = val;
    n++;
    printf("Modified Array:\n");
    for (i = 0; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}*/

// 4 -  WAP to delete an element from a given position of an array

/*#include <stdio.h>
int main()
{
    int a[20], i, n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter %d number: ", i + 1);
        scanf("%d", &a[i]);
    }
    int pos;
    printf("Enter the position of the element you want to delete:");
    scanf("%d", &pos);
    for (i = pos; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    --n;
    printf("Modified Array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}*/

// 5 - WAP to implement Linear search on an array.

/*#include <stdio.h>
int main()
{
    system("cls");
    int arr[20], i, n, val, flag = 0;
    printf("Enter the range of array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter %d number: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the value you are searching for: ");
    scanf("%d", &val);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == val)
            flag++;
    }
    if (flag == 0)
    {
        printf("\nValue not found in the list.");
    }
    else
    {
        printf("\n%d is present at location %d.", val, i + 1);
    }
    getch();
    return 0;
}*/

// 6 - WAP to implement Bubble sort.

/*#include <stdio.h>
int sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
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

int main()
{
    int arr[20], n, i;
    printf("\nEnter the range of array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter %d number: ", i + 1);
        scanf("%d", &arr[i]);
    }

    sort(arr, n);
    printf("\nSorted Array:\t");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}*/

// 7 - WAP to reverse an array

/*#include <stdio.h>

int reverse(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}
int main()
{
    int arr[20], i, n;
    printf("\nEnter the range of array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter %d number: ", i + 1);
        scanf("%d", &arr[i]);
    }
    reverse(arr, n);
    printf("\nReversed Array:\t");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}*/

// 8 -  WAP to merge two arrays into a new array.

/*#include <stdio.h>
int main()
{
    int a[10], b[10], i, n1, n2;
    printf("Enter szie of array 1: ");
    scanf("%d", &n1);
    for (i = 0; i < n1; i++)
    {
        printf("\nEnter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Enter size of array 2: ");
    scanf("%d", &n2);
    for (i = 0; i < n2; i++)
    {
        printf("\nEnter element %d: ", i + 1);
        scanf("%d", &b[i]);
    }
    int mergedSize = n1 + n2;
    int mergedArr[30];
    for (i = 0; i < n1; i++)
    {
        mergedArr[i] = a[i];
    }
    for (i = 0; i < mergedSize; i++)
    {
        mergedArr[n1 + i] = b[i];
    }
    printf("\nMerged Array is: ");
    for (i = 0; i < mergedSize; i++)
    {
        printf("%d\t", mergedArr[i]);
    }
    return 0;
}*/
