// Sum of the elements of an array using function

/*#include <stdio.h>
int arrSum(int [],int);
int main()
{
	int a[20],i,n,result;
	printf("\nEnter the number of elements to input: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter element %d: ",i+1);
		scanf("%d",&a[i]);
	}
	result = arrSum(a,n);
	printf("\n%d is the sum of the elements of the array\n",result);
	return 0;
}

int arrSum (int a[],int n)
{
	int i,sum =0;
	for(i=0;i<n;i++)
		sum = sum + a[i];
	return sum;
}*/

//WAP to find the largest element of an array using function

/*#include <stdio.h>
int a[10],i,n,result=0;
        printf("Enter the number of elements you want in array : ");
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
                printf("\nEnter %d number: ", i + 1);
                scanf("%d", &a[i]);
        }

int largest(int a[],int);
int main()
{
	int a[10],i,n,result;
	printf("\nEnter the number of elements to input: ");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
                printf("\nEnter element %d: ",i+1);
                scanf("%d",&a[i]);
        }
	result = largest(a,n);
	printf("\n%d is the largest number in the array\n",result);
	return 0;
}

int largest( int a[],int n)
{
	int max,i;
	max = a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
			max = a[i];
	}
	return max;
}*/

//WAP to implement Bubble Sort using function

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
    int arr[20], i, n;
    printf("Enter the number of elements you want in array : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter %d number: ", i + 1);
        scanf("%d", &arr[i]);
    }

    sort(arr, n);
    printf("\nThe sorted array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}*/

//WAP to implement Linear search using function

#include <stdio.h>

/*int linear(int [],int , int);
int main()
{
	int a[10],i,n,result=0;
	printf("Enter the number of elements you want in array : ");
       	scanf("%d", &n);
    	for (i = 0; i < n; i++)
    	{
        	printf("\nEnter %d number: ", i + 1);
        	scanf("%d", &a[i]);
    	}
	int num;
	printf("\nEnter element to search: ");
	scanf("%d",&num);
	result = linear(a,n,num);
	if( result == 1)
		printf("\nElement found\n");
	else
		printf("\nElement not found\n");
	return 0;
}

int linear (int a[],int n,int num)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i] == num)
			return 1;
	}
}*/

//WAP to add two matrices using function

#include <stdio.h>
int add(int []);
int main()
{
	int a[10],,b[10],c[20],i,n,result=0;
        printf("Enter the number of elements you want in array : ");
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
                printf("\nEnter %d number: ", i + 1);
                scanf("%d", &a[i]);
        }

	result = add(a,b,c);
	printf("\nAddtion is 
