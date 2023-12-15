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

// 7 - WAP to copy the content of one string to another using a user-defined function XSTRCPY (

/*#include <stdio.h>
void copy(char[], char[]);
int main()
{
    char s1[10], s2[10];
    printf("Enter a string: ");
    scanf("%s", s1);
    copy(s2, s1);
    printf("\nCopied string is %s\n", s2);
    return 0;
}

void copy(char s2[], char s1[])
{
    int i;
    for (i = 0; s1[i] != '\0'; i++)
    {
        s2[i] = s1[i];
    }
    s2[i] = '\0';
}*/

// 8 - WAP to concatenate one string at the end of another string using a user-defined function XSTRCAT().

/*#include <stdio.h>
#include <string.h>
void concat(char[], char[], char[]);
int main()
{
    system("cls");
    char s1[10], s2[10], s3[20];
    printf("Enter string 1: ");
    scanf("%s", s1);
    printf("Enter string 2: ");
    scanf("%s", s2);
    concat(s1, s2, s3);
    printf("\nConcatenated string is %s", s3);
    return 0;
}

void concat(char s1[], char s2[], char s3[])
{
    int i, j;
    int len1 = strlen(s1);
    for (i = 0; s1[i] != '\0'; i++)
        s3[i] = s1[i];
    for (j = 0; s2[j] != '\0'; j++)
        s3[i + j] = s2[j];
    s3[i + j] = '\0';
}*/

// 9 -  WAP to compare to strings using a user-defined function XSTRCMP ().

/*#include <stdio.h>
int compare(char[], char[]);
int main()
{
    char s1[10], s2[10];
    printf("Enter string 1: ");
    scanf("%s", s1);
    printf("Enter string 2: ");
    scanf("%s", s2);
    int res = compare(s2, s1);
    if (res == 1)
        printf("\nBoth are strings are same");
    else
        printf("\nBoth are strings are different");
    return 0;
}

int compare(char s2[], char s1[])
{
    int i, j;
    for (i = 0; s1[i] != '\0'; i++)
    {
        for (j = 0; s2[j] != '\0'; j++)
        {
            if (s1[i] == s2[j])
                return 1;
        }
    }
    return 0;
}*/