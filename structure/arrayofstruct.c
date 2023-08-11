#include<stdio.h>
struct student {
	int rollno;
	float marks;
};
int main()
{
	int i;
	struct student s[2];
	for(i=0;i<2;i++)
	{
		printf("enter roll number of students\n");
		scanf("%d",&s[i].rollno);
		printf("enter marks of students\n");
		scanf("%f",&s[i].marks);
	}
	for(i=0;i<2;i++)
	{
		printf("%d\n %f\n",s[i].rollno,s[i].marks);
	}
}
