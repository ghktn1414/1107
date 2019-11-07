#include <stdio.h>

int main(int argc,char *argv[])
{
	printf("argument count : %d\n",argc);
	for(int i=0; i<argc;i++)
	{
		printf("%d번째 인수 : %s\n",i,argv[i]);
	}
	return 0;
}
