/*1. WAP to print the following pattern:

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/

/*#include <stdio.h>
int main()
{
    system("cls");
    int i, j, n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }
    return 0;
}*/

// 2. WAP to print the following pattern:

/*
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/

/*#include <stdio.h>
int main()
{
    system("cls");
    int i, j, n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
            printf("%d ", i);
        printf("\n");
    }
    return 0;
}*/

// 3. WAP to print the following pattern:

/*
A
A B
A B C
A B C D
A B C D E
A B C D E F*/

/*#include <stdio.h>
int main()
{
    system("cls");
    int i, j, n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        char ch = 'A';
        for (j = 1; j <= i; j++)
        {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}*/

/*4. WAP to print the following pattern:
 1
 121
 12321
1234321
123454321*/

/*#include <stdio.h>
int main()
{
    system("cls");
    int i, j, n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (j = i - 1; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}*/

// 5. WAP to display all prime numbers within a given range

#include <stdio.h>
int main()
{
    int start, end, isPrime;

    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);
    for (int num = start; num <= end; num++)
    {
        isPrime = 1;

        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime && num > 1)
        {
            printf("%d ", num);
        }
    }

    return 0;
}