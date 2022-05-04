#include<stdio.h>
#include<string.h>
struct std{
	int roll,mark;
	char name[20],course[20];
};

// structure creation  variable 
struct std s;
struct std *p=&s;
int main()
{
	p->roll=101;
	p->mark=360;
	strcpy(p->name,"Rahul");
	strcpy(p->course,"Btech");
	printf("%d\n",p->roll);
	printf("%d\n",p->mark);
	printf("%s\n",p->name);
	printf("%s\n",p->course);
	return 0;
}

