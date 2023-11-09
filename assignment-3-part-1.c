// 1 -->  WAP to find out the sum of first 10 numbers.

/*#include <stdio.h>
int main()
{
    int i, sum = 0;
    for (i = 1; i <= 10; i++)
        sum = sum + i;
    printf("\nThe sum is %d", sum);
    return 0;
}*/

// 2 -->  WAP to calculate the sum of the numbers from m to n where m and n will be inputted by the user

/*#include <stdio.h>
int main()
{
    int i, sum = 0, m, n;
    printf("\nEnter the lower limit (m) and upper limit (n): \n");
    scanf("%d%d", &m, &n);
    for (i = m; i <= n; i++)
        sum = sum + i;
    printf("Sum = %d\n", sum);
    return 0;
}*/

// 3 --> WAP to print the multiplication table of any inputted number

/*#include <stdio.h>
int main()
{
    int i, n;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    printf("\nThe multiplication table is %d is -->", n);
    for (i = 1; i <= 10; ++i)
        printf("\n%d x %d = %d", n, i, n * i);
    return 0;
}*/

// 4 --> WAP to find out the factorial of any number.

/*#include <stdio.h>
int main()
{
    int i, fact = 1, n;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i)
        fact *= i;
    printf("\nThe factorial of %d is %d", n, fact);
    return 0;
}*/

// 5 --> Not possible

// 6 --> WAP to check whether an inputted number is a prime number or a composite number.

/*#include <stdio.h>
int main()
{
    int i, flag = 0, n;
    printf("\n Enter a Number : ");
    scanf("%d", &n);
    if (n == 0 || n == 1)
    {
        printf("\n The given number is not Prime.");
    }

    else
    {
        for (i = 2; i <= n / 2; i++)
            if ((n % i) == 0)
            {
                flag++;
                break;
            }
    }
    // n should be greater than 1
    if (flag == 0)
    {
        printf("\nThe Given number is Prime");
    }
    else
    {
        printf("\nThe Given number is Composite");
    }
    return 0;
}*/

// 7 --> WAP to check whether an inputted number is a palindrome number or not

/*#include <stdio.h>
int main()
{
    int i, n, rem, rev = 0;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    int num = n;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if (rev == num)
        printf("\n%d is palindrome", num);
    else
        printf("\n%d is not palinrome", num);
    return 0;
}*/

// 8 -->  WAP to check whether an inputted number is an Armstrong number or not

/*#include <stdio.h>
#include <math.h>
int main()
{
    int n, temp, count = 0, sum = 0, rem;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    temp = n;
    while (temp > 0)
    {
        temp = temp / 10;
        count++;
    }
    temp = n;
    while (temp > 0)
    {
        rem = temp % 10;
        sum = sum + pow(rem, count);
        temp = temp / 10;
    }
    if (sum == n)
        printf("\n%d is an Armstrong number", n);
    else
        printf("\n%d is not an armstrong number", n);
    return 0;
}*/

// 9 --> WAP to enter a decimal number. Display the binary equivalent of this decimal number.

/*#include <stdio.h>
int main()
{
    int bin = 0, r, n, i = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        r = n % 2;
        bin = bin + (r * i);
        i = i * 10;
        n = n / 2;
    }
    printf("\n%d", bin);
    return 0;
}*/

// 10 --> WAP to enter a binary number. Display the decimal equivalent of this binary number.

/*#include <stdio.h>
#include <math.h>
int main()
{
    int dec = 0, bin, rem, i, temp, count = 0;
    printf("Enter any Binary Number: ");
    scanf("%d", &bin);
    temp = bin;
    while (temp > 0)
    {
        temp = temp / 10;
        count++;
    }
    for (i = 0; i < count; i++)
    {
        rem = bin % 10;
        dec = dec + (pow(2, i) * rem);
        bin = bin / 10;
    }
    printf("\n%d", dec);
    return 0;
}*/

// 11 --> WAP to display the Fibonacci series up to the nth term.

/*#include <stdio.h>
int main()
{
    int t1 = 0, t2 = 1, nxt = t1 + t2, n, i;
    printf("Enter the number of terms of the fibonacci series: ");
    scanf("%d", &n);
    printf("Fibonacci Series is:\n");
    printf("%d\t%d", t1, t2);
    for (i = 3; i <= n; i++)
    {
        printf("\t%d", nxt);
        t1 = t2;
        t2 = nxt;
        nxt = t1 + t2;
    }
    return 0;
}*/

// 12 -->  WAP to find out the GCD of two numbers.

/*#include <stdio.h>
int main()
{
    int num1, num2, gcd;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    while (num1 != num2)
    {
        if (num1 > num2)
        {
            num1 = num1 - num2;
        }
        else
        {
            num2 = num2 - num1;
        }
    }

    gcd = num1;
    printf("GCD of %d and %d is %d\n", num1, num2, gcd);
    return 0;
}*/

// 13 -->  WAP to find out the sum of the following series: 1 / 1 !+1 / 2 !+1 / 3 !+ ……………………..+ 1 / n !

/*#include <stdio.h>
int main()
{
    int n, i;
    double sum = 0, factorial = 1;

    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        factorial = 1;
        for (int j = 1; j <= i; j++)
        {
            factorial *= j;
        }
        sum += 1.0 / factorial;
    }
    printf("Sum of the series up to %d terms is: %lf\n", n, sum);
    return 0;
}*/

// 14 -->  Write a menu driven program to implement a calculator.

/*#include <stdio.h>
#include <stdlib.h>
int main()
{
    int ch, a, b;
    while (1)
    {
        printf("\n\nCalculator\n");
        printf("\n1. Add");
        printf("\n2. Subtract");
        printf("\n3. Multiply");
        printf("\n4. Divide");
        printf("\n5. Mod");
        printf("\n6. Exit");
        printf("\n\nEnter two numbers: \n");
        scanf("%d%d", &a, &b);
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\n%d", a + b);
            break;
        case 2:
            printf("\n%d", a - b);
            break;
        case 3:
            printf("\n%d", a * b);
            break;
        case 4:
            if (b == 0)
            {
                printf("\nError! Division by zero not possible.");
            }
            else
            {
                printf("\n%d", a / b);
            }
            break;
        case 5:
            printf("\n%d", a % b);
            break;
        case 6:
            exit(1);
            break;
        default:
            printf("\nInvalid choice\n");
        }
    }
    return 0;
}*/