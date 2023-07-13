#include<stdio.h>
#include<stdlib.h>
struct student{
	int number;
	char name;
	float marks;
};
int main()
{
	struct student *s=(struct student*)malloc(sizeof(struct student));
			s->number=50;
			s->name='r';
			s->marks=90.5;
			printf("%d %c %f",s->number, s->name ,s->marks);
}
		       	

