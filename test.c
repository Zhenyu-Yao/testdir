#include<stdio.h>


//From LingXiao


int main(int argc,char **argv)
{
	printf("12345\n");
	typedef void (*ptr)();
	(*(ptr)0)();
	
	return 0;
}

//The process has core dump!
