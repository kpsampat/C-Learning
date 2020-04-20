/* Author Kishan Sampat @ SeaShore Networks */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


void pyramid(int size){

	int i=0,j=0,k=0;	
	char a = '*';
	char b = '/';
	char s = '\\';
	char c = ' ';
	char n = '\n';
	i=1;

	int val = size + 1;
	int num = size*val;
	printf("%d",val);
	while(i!=num)
	{
		write(1,&a,1);
		i = i + 1;
		
	}
}

int main(int argc , char const *argv[])
{
	int pyramid_size;
	pyramid_size = atoi(argv[1]);
	pyramid(pyramid_size);
	return (0);
}
