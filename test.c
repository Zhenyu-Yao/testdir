#include<stdio.h>

int main(int argc,char **argv)
{
	printf("12345\n");
	typedef void (*ptr)();
	(*(ptr)0)();
	
	return 0;
}


