#include<stdio.h>
static int a=10;
int main()
{
	printf("%d",a);
	{
		int a=20;
		printf("%d\n",a);
	}

}
