#include<stdio.h>
int main()
{
	int num,bitposition;
	printf("enter a number\n");
	scanf("%d",&num);
	printf("enter a bit position\n");
	scanf("%d",&bitposition);
	num=num|(1<<bitposition);
	printf("%d",num);
}
