#include<stdio.h>
int checkpowerof2(int num);
int main()
{
	int num=0;
	printf("enter number");
	scanf("%d",&num);
        if(checkpowerof2(num))
		printf("given num is power of two\n");
	else
		printf("given number is not power of two\n");

}
int checkpowerof2(int num)
{
	if(num&(num-1)!=0)
		return 0;
	else return 1;

}

