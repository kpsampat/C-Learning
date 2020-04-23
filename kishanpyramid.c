/* Author Kishan Sampat @ Sea Shore Networks */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int get_total_num_lines(int stage);

void door_matrix(int size){
	
	char a = '|';
	char n = '\n';
	int i = 0 , j=0;
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

int get_current_stage(int current_line,int size){
	int i=0;
	int current_stage = 1;
	int line = 0;

	while (current_stage <= size){
		i = 0;
		while (i <= current_stage+1) {
			i = i + 1;
			line = line + 1;
			if (line == current_line){
				return current_stage;
			}
		}		
		current_stage = current_stage + 1;
	}
}

int get_total_number_of_spacing(int current_line, int size , int current_stage){
	
	int space = 0;
	int total_lines = 0;
	
	total_lines = get_total_num_lines(size);
	space = total_lines + (size - current_stage) * 2 - current_line;

	return space;
	}


int get_total_num_lines(int stage){
	int lines=0 , i=0 , j=0 ,k=0;
	while(i<stage){
		j = 0;
		k = k + 1;
		while(j<i+3){
			lines = lines + 1;
			j = j + 1;
		}
		i = i + 1;
	}
	return lines;
}


void pyramid(int size){

	int i=0,j=0,k=0,num=0;
	
	char a = '*';
	char b = '/';
	char c = '\\';
	char s = ' ';
	char n = '\n';
	char l = '|';
	
	int line;
	int space;
	int current_stage;

	i = 1;
	line = get_total_num_lines(size);

	while(i<=line){
		j = 1;
		
		current_stage = get_current_stage(i,size);
		space = get_total_number_of_spacing(i,size,current_stage);
		
		while(j<=space)
		{
			write(1,&s,1);
			j = j + 1;
		
		}
		
		write(1,&b,1);
		int total_stars = (2*i-1) + ((current_stage - 1) * 4 );
		while(k <  total_stars) 
		{	
			if ( i > line - size )
			{
			
				 int start = (total_stars - size) / 2 ;
				 int end =  (total_stars + size) / 2 ;
				
				 if( k >= start && k < end) 
				 {
					 if(size % 5 ==0 && i == line - (size/2))
					 {
							
							 if(k >= start+((end - start)/2)+1 && k+1 < end)
							 {
								 write(1,"$",1);
							 }
							 else{
								 write(1 , &l ,1);
							 }
					 }
					 else{

						 write(1, &l ,1);
					 }
				 }
				 else{
					 write(1, &a, 1);
				 }
			}
			else{
				write(1,&a,1);
			}
			k = k + 1;
//			printf("Stars %d \n",k);
//			printf("current Stage %d \n",current_stage);
//			printf("current line %d \n",i);	
		}
		write(1,&c,1);
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
