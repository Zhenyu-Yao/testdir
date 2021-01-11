#include<stdio.h>


void sub(int x, char * y)
{

	printf("Start  of sub.\n");
	printf("argc=%d\n",x);
	printf("argv[1]=%s\n",y);
	printf("End  of sub.\n");

}


int main(int argc,char **argv)
{
	printf("12345\n");
	sub(argc,argv[1]);
	printf("Return of sub.\n");
	typedef void (*ptr)();
	(*(ptr)0)();
	
	return 0;
}


