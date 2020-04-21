#include <unistd.h>
#include <stdlib.h>



void matrix(int size){


	char a = '|';
	char n = '\n';
	int i = 0 , j=0 , z=0;
	i = 0;
	while(i<size){
		j = 1;
		write(1,&a,1);
		while(j<size){
			write(1,&a,1);
			j = j + 1;
		}
		i = i + 1;
		write(1,&n,1);
	}
}

int main(int argc ,  char const *argv[]){
	int pyramid_size;
	pyramid_size = atoi(argv[1]);
	matrix(pyramid_size);
	return (0);
}



