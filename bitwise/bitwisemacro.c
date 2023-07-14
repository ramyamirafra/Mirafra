#include<stdio.h>
#define setbit(num,pos) num|(1<<pos)
#define clearbit(num,pos) num &(~(1<<pos))
#define togglebit(num,pos) num^(1<<pos)

int main()
{
int num,bitpos;
printf("enter the num");
scanf("%d",&num);
printf("enter bitpos");
scanf("%d",&bitpos);
printf("%d\n",setbit(num,bitpos));
printf("%d\n",clearbit(num,bitpos));
printf("%d\n",togglebit(num,bitpos));
}

