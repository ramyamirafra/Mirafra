#include<stdio.h>
int fun (int num,int bitpos);
int main()
{
int num,bitpos,result;
printf("enter number\n");
scanf("%d",&num);
printf("enter bit pos\n");
scanf("%d",&bitpos);
result=fun(num,bitpos);

printf("%d\n ",result);
}


int fun(int num,int bitpos)
{
	
	num=num|(1<<bitpos);
	return num;
}
		

