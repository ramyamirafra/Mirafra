#include<stdio.h>
int main()
{
	int number=50;
	int*p;
	p=&number;
	int**pp;
	pp=&p;
	printf("address of p %x\n",p);
	printf("address of pp %x\n",pp);
	printf("value of p %d\n",*p);
	printf("value of pp %d\n",**pp);
}
