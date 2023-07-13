#include<stdio.h>
int main()
{
	int binary,decimal=0,rem,num,base=1;
	printf("enter binary number\n");
	scanf("%d",&binary);
	num=binary;
	while(binary!=0)
	{
		rem=binary%10;
		decimal=decimal+rem*base;
		binary=binary/10;
		base=base*2;
	}
	printf("%d",decimal);
}


