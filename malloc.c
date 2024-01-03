/*#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *ptr;
	int n,i,sum = 0;
	printf("Enter numbe of elements: ");
	scanf("%d",&n);
	ptr = (int*) malloc(n * sizeof(int));
	if(ptr == NULL)
	{
		printf("\nMemory allocation not possible");
		exit(0);
	}
	else
	{
		for(i=0;i<n;i++)
		{
			printf("\nEnter elements: ");
			scanf("%d",&ptr[i]);
			sum += ptr[i];
		}

		printf("\nElements inputed are: \n");
		for(i=0;i<n;i++)
		{
			printf("%d\t",ptr[i]);
		}
		printf("\nSum of the array is %d",sum);
		free(ptr);
	}
	return 0;

}*/

/*#include <stdio.h>
#include<stdlib.h>
int main()
{
	 int *ptr;
        int n,i;
        printf("Enter numbe of elements: ");
        scanf("%d",&n);
        ptr = (int*) malloc(n * sizeof(int));
        if(ptr == NULL)
        {
                printf("\nMemory allocation not possible");
                exit(0);
        }
        else
        {
                for(i=0;i<n;i++)
                {
                        printf("\nEnter elements: ");
                        scanf("%d",&ptr[i]);
                }

                printf("\nElements inputed are: \n");
                for(i=0;i<n;i++)
                {
                        printf("%d\t",ptr[i]);
                }

		int max = ptr[0];
		for(i=0;i<n;i++)
		{
			if(max < ptr[i])
				max = ptr[i];
		}
		int min = ptr[0];
		for(i=0;i<n;i++)
		{
			if(min >  ptr[i])
				min = ptr[i];
		}

		printf("\n%d is max\n",max);
		printf("\n%d is min\n",min);

	}

	free(ptr);

}*/

/*#include <stdio.h>
#include <stdlib.h>
int main()
{
       	int *ptr;
        int n,i,flag = 0;
        printf("Enter numbe of elements: ");
        scanf("%d",&n);
        ptr = (int*) malloc(n * sizeof(int));
        if(ptr == NULL)
        {
                printf("\nMemory allocation not possible");
                exit(0);
        }
        else
        {
		int num;
                for(i=0;i<n;i++)
                {
                        printf("\nEnter elements: ");
                        scanf("%d",&ptr[i]);
                }
		printf("\nEnter the element to be searched: ");
		scanf("%d",&num);
		for(i=0;i<n;i++)
		{
			if( num == ptr[i])
			{
				flag ++;
				break;
			}
		}
		if(flag == 1)
			printf("\nElement found");
		else
			printf("\nElement not found");
	}

	free(ptr);
	return 0;
}*/

