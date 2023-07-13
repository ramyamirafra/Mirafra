#include<stdio.h>
int fun(int binary)
{
	int rem=0,decimal=0,base=1;
	while(binary!=0)
	{
		rem=binary%10;
		decimal=decimal+rem*base;
		binary=binary/10;
		base=base*2;
	}
	return decimal;
}
int main()
{
	int binary,decimal;
	printf("enter a binary numnber\n");
        scanf("%d",&binary);
	int x=fun(binary);
	printf("%d\n",x);
	
}


