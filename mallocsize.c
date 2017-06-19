#include <stdio.h>
#include <malloc.h>
int main()
{
	char *a=(char *)malloc(1024);
	sizeof(a);
	printf("%d",a);
	getchar();
}
