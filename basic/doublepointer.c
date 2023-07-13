#include<stdio.h>//swapping of two numbers by using pointers
int main()
{
	int a=20,b=30,*p1=&a,*p2=&b;
	printf(" before swapping %d %d \n",*p1,*p2);
	*p1=*p1+*p2;
	*p2=*p1-*p2;
	*p1=*p1-*p2;
	printf("after swapping %d %d\n",*p1,*p2);
}

