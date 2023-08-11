#include<stdio.h>
struct student 
{

	int rollno;
	float marks;
};
int main()
{
struct student s;

struct student *ptr;
ptr=&s;
printf("enter roll number");
scanf("%d",&ptr->rollno);
printf("enter marks ");
scanf("%f",&ptr->marks);
printf("%d %f",ptr->rollno,ptr->marks);
}

