#include<stdio.h>
struct student{
	int number;
	char name;
	float marks;
};
int main()
{
struct student s;
s.number=40;
s.name='r';
s.marks=70.5;
printf("%d %c %f",s.number,s.name,s.marks);
}
