#include <stdio.h>

int main()
{
	int i=0,j=0,k=0,num;
	printf("\n Enter number of rows :" );
	scanf("%d",&num);
	printf("\n");
	printf("\n");
	printf("Here is the Pyramid \n");
	i = 1;
	int val = num + 1;
	int size = num*val;
	while(i<=size)
	{
		j=1;
		while(j<=size-i)
		{
			printf(" ");
			j = j + 1;
		}
		while (k!=2*i-1)
		{
			printf("*");
			k = k + 1;
		}
		k=0;
		printf("\n");
		i = i + 1;
	}
	return 0;
}

