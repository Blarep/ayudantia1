#include <stdlib.h>
#include <stdio.h>
int a = 3 ;
int main ( int argc , char *argv[] ) 
{
	int *b=(int*) malloc(sizeof(int)) ;
	int *c = malloc(sizeof(int));
	int d;
	printf("%p\n",a );
	printf("%p\n",b );
	printf("%p\n",*b );
	printf("%p\n",c );
	printf("%p\n",*c );
	printf("%p\n",d );
	printf("%p\n", argv);
	return argc ;
}