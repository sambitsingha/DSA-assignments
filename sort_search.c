// 1 - WAP to implement linear seach

/*#include <stdio.h>
int linear(int[], int, int);
int main()
{
	int arr[20], i, n;
	printf("Enter size of array: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Enter element %d: ", i + 1);
		scanf("%d", &arr[i]);
	}
	int num;
	printf("Enter element to search: ");
	scanf("%d", &num);
	int res = linear(arr, n, num);
	if (res != 0)
		printf("Element found at %d", res);
	else
		printf("Element not found");
	return 0;
}

int linear(int arr[], int n, int num)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (arr[i] == num)
			return i;
	}
	return 0;
}*/

// 2 - WAP to implement binary search

/*#include <stdio.h>
int binary(int arr[],int, int);
int main()
{
	int arr[20],i,n;
	printf("ENter size: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter element %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	int num;
	printf("ENter element to find: ");
	scanf("%d",&num);
	int res = binary(arr,n,num);
	if(res!=-1)
		printf("Element found at index %d",res);
	else
		printf("Element not found");
	return 0;
}

int binary(int arr[],int n,int num)
{
	int high,low,mid;
	high = n-1;
	low = 0;
	while(low<=high)
	{
		mid = (low+high)/2;
		if(arr[mid] == num)
			return mid;
		else if(num>arr[mid])
			low = mid + 1;
		else
			high = mid -1;
	}
	return -1;
}*/

// 3 - Implement Binary Seach using recursion

/*#include <stdio.h>
int binary(int [],int ,int,int);
int main()
{
	int arr[20],i,n,high,low;
	printf("Enter size: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter element %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	int num;
	printf("Enter element to find: ");
	scanf("%d",&num);
	high = num;
	low = 0;
	int res = binary(arr,num,high,low);
	if(res == 1)
		printf("Element found");
	else
		printf("Element not found");
	return 0;
}
int binary(int arr[],int num,int high , int low)
{
	while(high>=low)
	{
		int mid = low + (high-1)/2;
		if(arr[mid] == num)
			return 1;
		else if(arr[mid] > num)
			return binary(arr,num,mid-1,low);
		else
			return binary(arr,num,high,mid+1);
	}
	return 0;
}*/

// 4 - Bubble Sort

/*#include <stdio.h>
void sort(int [],int);
int main()
{
	int arr[20],i,n;
	printf("Enter size: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter element %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	sort(arr,n);
	printf("Sorted array is: ");
	for(i=0;i<n;i++)
		printf("%d\t",i);
	return 0;
}
void sort(int arr[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j]> arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}*/

// 5 - Selection Sort

/*#include <stdio.h>
void selcSort(int arr[10], int n);
void swap(int *x, int *y);
int main()
{
	int arr[10], i, n;
	printf("Enter size: ");
	scanf("%d", &n);
	printf("ENter element: \n");
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	selcSort(arr, n);
	printf("Sorted array is: \n");
	for (i = 0; i < n; i++)
		printf("%d\t", arr[i]);
	return 0;
}

void selcSort(int arr[10], int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		int min = i;
		for (j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[min])
				min = j;
		}
		swap(&arr[min], &arr[i]);
	}
}

void swap(int *x, int *y)
{
	int *temp;
	temp = x;
	x = y;
	y = temp;
}
*/

// 6 - Insertion Sort

/*#include <stdio.h>

void insertionSort(int arr[], int n)
{
	int i, temp, j;
	for (i = 1; i < n; i++)
	{
		temp = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > temp)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = temp;
	}
}

int main()
{
	int arr[10], n, i;
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	printf("Enter the elements: ");
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	insertionSort(arr, n);
	printf("Array after sorting: \n");
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
*/