// WAP to allocate memory dynamically for an integer array of size 10. Enter the array elements and display their sum.

/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int size = 10;
    int sum = 0;
    arr = (int *)malloc(size * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed!");
        return 1;
    }

    printf("Enter the array elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    printf("Sum of array elements: %d\n", sum);
    free(arr);
    return 0;
}*/

// WAP to allocate memory dynamically for an array. Find out the largest and smallest element of the array.

/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int size;
    int largest, smallest;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    arr = (int *)malloc(size * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed!");
        return 1;
    }

    printf("Enter the array elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    smallest = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    printf("Largest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);

    free(arr);
    return 0;
}*/

// WAP to allocate memory dynamically for an integer array. Check whether an inputted element is present in this array or not.

/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int size;
    int element;
    int found = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    arr = (int *)malloc(size * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed!");
        return 1;
    }

    printf("Enter the array elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &element);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            found = 1;
            break;
        }
    }

    if (found)
    {
        printf("Element %d is present in the array.\n", element);
    }
    else
    {
        printf("Element %d is not present in the array.\n", element);
    }

    free(arr);
    return 0;
}*/

// WAP to allocate memory dynamically for a character array. Store your first name in the allocated memory.Now reallocate the memory using realloc() to store your entire name and then display it.

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *firstName;
    int firstNameSize = 10;
    int fullNameSize = 20;

    firstName = (char *)malloc(firstNameSize * sizeof(char));

    if (firstName == NULL)
    {
        printf("Memory allocation failed!");
        return 1;
    }

    printf("Enter your first name: ");
    scanf("%s", firstName);

    firstName = (char *)realloc(firstName, fullNameSize * sizeof(char));

    if (firstName == NULL)
    {
        printf("Memory reallocation failed!");
        return 1;
    }

    printf("Enter your last name: ");
    scanf("%s", firstName + strlen(firstName));

    printf("Full name: %s\n", firstName);

    free(firstName);
    return 0;
}*/
