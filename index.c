#include <stdio.h>
#include <math.h>

int main()
{
    long long binary1, binary2;
    int i = 0, remainder = 0, sum[20];

    printf("Enter the first binary number: ");
    scanf("%lld", &binary1);
    printf("Enter the second binary number: ");
    scanf("%lld", &binary2);

    while (binary1 != 0 || binary2 != 0)
    {
        sum[i++] = (binary1 % 10 + binary2 % 10 + remainder) % 2;
        remainder = (binary1 % 10 + binary2 % 10 + remainder) / 2;
        binary1 /= 10;
        binary2 /= 10;
    }

    if (remainder != 0)
    {
        sum[i++] = remainder;
    }
    --i;

    printf("Sum of the two binary numbers: ");
    while (i >= 0)
    {
        printf("%d", sum[i--]);
    }
    printf("\n");

    // Convert the sum from binary to decimal
    int decimalSum = 0, base = 1;
    int j = i; // Resetting the counter for decimal conversion

    while (j >= 0)
    {
        decimalSum += sum[j--] * base;
        base *= 2;
    }

    printf("Decimal equivalent of the sum: %d\n", decimalSum);

    return 0;
}
