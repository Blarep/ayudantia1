#include <stdlib.h>
#include <stdio.h>

int a = 3;

int main(int argc, char *argv[])
{
	static int b ;
	printf("%p\n", &a );
	printf("%p\n", &b);
	int c = 3;
	printf("%p\n",&c );
}