#include<stdio.h>
int main()
{
	int num,kthbit,set,reset,bitpos;//set or reset a particular bit
        printf("enter a num");
	scanf("%d",&num);
	printf("enter kthbit");
	scanf("%d",&kthbit);
	if( (num&(1<<kthbit)) !=0)
	{
	 num=num&(~(1<<kthbit));//clear
	 printf("clear %d",num);
	}
	else
	{
	num=num|(1<<kthbit);//set
	printf("set %d",num);
	}
}	

