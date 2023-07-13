#include<stdio.h>
#define max(x,y,z) ((x>y&&x>z)?x:y>z?y:z)
int main()
{
	int a,b,c;
	printf("enter three numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	printf("big of three %d\n",max(a,b,c));

}
