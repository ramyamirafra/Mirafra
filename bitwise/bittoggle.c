#include<stdio.h>
int main()
{
	int num,bitposition;
	printf("enter the number");
	scanf("%d",&num);
	printf("enter bitposition");
	scanf("%d",&bitposition);
	num=num^(1<<bitposition);
	printf("%d",num);
}	

