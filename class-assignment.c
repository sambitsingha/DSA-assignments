// 16 - Fibonacci series using recursion

/*#include <stdio.h>
int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int count, i;
    printf("Enter the number of terms: ");
    scanf("%d", &count);
    printf("Fibonacci Series up to %d terms:\n", count);
    for (i = 0; i < count; i++)
    {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}*/

// 17 - design a power function and use that to evaluate x + x^2 + x^3 + ... + x^n

/*#include <stdio.h>
double sumOfPowers(double x, int n)
{
    if (n == 0)
    {
        return 1.0;
    }
    else
    {
        double result = 0.0;
        for (int i = 1; i <= n; i++)
        {
            double power = 1.0;
            for (int j = 1; j <= i; j++)
            {
                power *= x;
            }
            result += power;
        }
        return result;
    }
}

int main()
{
    double base, result;
    int exponent;

    printf("Enter the base (x): ");
    scanf("%lf", &base);

    printf("Enter the exponent (n): ");
    scanf("%d", &exponent);

    result = sumOfPowers(base, exponent);
    printf("The sum of x^1 + x^2 + x^3 + ... + x^%d is: %.2f\n", exponent, result);

    return 0;
}*/

// 18 - Find GCD using recursion

/*#include <stdio.h>
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("The GCD of %d and %d is: %d\n", num1, num2, gcd(num1, num2));
    return 0;
}*/

// 19 - Sum of n natural numbers using recursion

/*#include <stdio.h>
int sumOfN(int n)
{
    if (n == 0)
        return 0;
    else
        return n + sumOfN(n - 1);
}

int main()
{
    int num, result;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num < 0)
        printf("Please enter a positive integer.\n");
    else
    {
        result = sumOfN(num);
        printf("The sum of the first %d natural numbers is: %d\n", num, result);
    }

    return 0;
}*/

// 20 - WAP to check palindrome string using recursion

/*#include <stdio.h>
int getReverse(int num)
{
    static int reversedNum = 0;

    if (num == 0)
    {
        return reversedNum;
    }
    else
    {
        reversedNum = reversedNum * 10 + num % 10;
        return getReverse(num / 10);
    }
}

int isPalindrome(int num)
{
    int reverse = getReverse(num);
    if (num == reverse)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int inputNumber;

    printf("Enter a number: ");
    scanf("%d", &inputNumber);

    if (isPalindrome(inputNumber))
    {
        printf("The entered number is a palindrome.\n");
    }
    else
    {
        printf("The entered number is not a palindrome.\n");
    }

    return 0;
}*/