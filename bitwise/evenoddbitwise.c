#include<stdio.h>
int evenorodd(int num);
int main()
{
	int num;
	printf("enter a number\n");
	scanf("%d",&num);
	if(evenorodd(num))
	{
		printf("num is even\n");
	}
	else
	{ 
		printf("num is odd\n");
	}		


}
int evenorodd(int num)
{
if(num&1==0)
return 0;
else 
return 1;
}
