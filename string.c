// 1 - WAP to enter any string and then count how many characters are present in it.

/*#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    printf("Enter a string: ");
    scanf("%s", str);
    int length = strlen(str);
    printf("\nNumber of characters in the string is %d.", length);
    return 0;
}*/

// 2 -  WAP to convert the characters of any string to upper case without using any string library function.

/*#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] = str[i] - 32;
        }
    }
    printf("\nString in uppercase: %s\n", str);
    return 0;
}*/

// 3 -  WAP to extract the first n characters of any string.

/*#include <stdio.h>
#include <string.h>
int main()
{
    char str[10];
    int n, i;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter the number of characters required from the beginning: ");
    scanf("%d", &n);
    char ch;
    for (i = 0; i < n && str != '\0'; i++)
    {
        printf("%c", str[i]);
    }
    return 0;
}*/

// 4 -  WAP to extract the last n characters of any string.

/*#include <stdio.h>
#include <string.h>
int main()
{
    char str[10];
    int n, i;
    printf("Enter the string: ");
    scanf("%s", str);
    printf("Enter the number of characters you want to remove from the end: ");
    scanf("%d", &n);
    int length = strlen(str);
    printf("Characters extracted are: \n");
    for (i = length - 1; i >= (length - n); i--)
    {
        printf("%c\n", str[i]);
    }
    return 0;
}*/

// 5 - WAP to extract a substring from an inputted string. The position from which to start the substring and the length of the substring will be inputted by the user.

/*#include <stdio.h>
#include <string.h>
int main()
{
    char str[15];
    int n, pos, i;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("\nEnter the postion from where you want the substring to be: ");
    scanf("%d", &pos);
    printf("\nEnter the length of the substring: ");
    scanf("%d", &n);
    printf("\nThe substring is: \n");
    for (i = pos; i <= n; i++)
    {
        printf("%c", str[i]);
    }
    return 0;
}*/

// 6 -  WAP to find out the length of any string using a user-defined function XSTRLEN ().

/*#include <stdio.h>
int length(char[]);

int main()
{
    char str[10];
    printf("Enter a string: ");
    scanf("%s", str);
    int len = length(str);
    printf("\nThe length is %d", len);
    return 0;
}

int length(char str[])
{
    int n = 0;
    for (int i; str[i] != '\0'; i++)
        n++;
    return n;
}*/