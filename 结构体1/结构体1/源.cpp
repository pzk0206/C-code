#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct Stu
{
	int age = 20;
	char name[20];
	char id [10];
};
int main()
	{
	struct Stu s = { 20,"ÕÅÈý",20 };
	printf("1:age=%d name=%s id=%d", s.age, s.name, s.id);
	struct Stu* ps = &s;
	printf("2:age=%d name=%s id=%d", (*ps).age, (*ps).name, (*ps).id);
	printf("2:age=%d name=%s id=%d", ps->age, ps->name, ps->id);
}