#include<stdio.h>
int fun (int num,int pos);
int main()
{
	int num,bitpos,result;
	printf("enter a number\n");
	scanf("%d",&num);
	printf("enter bitpos");
	scanf("%d",&bitpos);
	result=fun(num,bitpos);

printf("%d",result);
}

int fun(int num,int bitpos)
{
	num=num&(~(1<<bitpos));
	return num;
}


