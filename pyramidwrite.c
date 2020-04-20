/* Author Kishan Sampat @ SeaShore Networks */

#include <unistd.h>
#include <stdlib.h>

void pyramid(int size){

	int i=0,j=0,k=0;	
	char a = '*';
	char b = '/';
	char s = '\\';
	char c = ' ';
	char n = '\n';
	char p = 'K';
	i=1;

	int val = size + 1;
	int num = size*val;

	while(i<=num)
	{
		j = 1;	
		while(j<=num-i)
		{
			write(1,&p,1);
			j = j + 1;
		}
		write(1,&b,1);
		while(k!=2*i-1)
		{		
			write(1,&a,1);
			k = k + 1;
		}
		write(1,&s,1);
		k = 0;
		write(1,&n,1);
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
