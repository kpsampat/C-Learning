#include <stdio.h>

/* Assignment operators */

int sst_val(int v)
{
printf("v equals %d\n",v);
v+=20;
printf("add v equals %d\n",v);
v-=10;
printf("minus v equals %d\n",v);
v*=200000;
printf("multiply v equals %d\n",v);
return(0);
}
int main()
{
	int	testInteger;
	int	temp;
	char	new;
	char	test_string[5];
	char	*test_string_dy;

	temp = 0;
	new = 'a';
	test_string_dy = "abcde";
	printf("%p \n",&test_string_dy);
	printf("Enter an integer: ");
	scanf("%d", &testInteger);
	printf("Number = %d",testInteger);
	sst_val(testInteger);
}
