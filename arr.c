#include <stdio.h>
#include <stdlib.h>

int get_int(){
	int a;
	printf("Enter the input : ");
	scanf("%d",&a);
}

void main(){
	int n;
	printf("\n");
	printf("Enter the input" );
	scanf("%d",&n);
	int kishan[n];               //This will create the array of n empty things
	for (int i=0;i<n;i++)
	{
		kishan[i]=get_int();
	}
	printf("%i , %i \n ", kishan[0],kishan[1]);
}

