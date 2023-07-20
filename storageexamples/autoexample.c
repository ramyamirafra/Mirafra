#include<stdio.h>
int main()
{
	auto int a=20;
	
	{
		auto int a=30;
		printf("%d",a);
	}
	printf("%d",a);
}
