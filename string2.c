#include<stdio.h>
#include<string.h>
struct student{
	int roll;
	char name[20];
	char  course[30];
};
int main()
{
	struct student b;
  b.roll=55;
  //assigning string value to struct
  strcpy(b.name,"prerana");
  strcpy(b.course,"b.tech");
printf("*****STUDENT INFORMATION*****\n");
printf(" student rollno is %d\n",b.roll);
printf(" student name is %s\n",b.name);
printf(" student branch is %s\n",b.course);




	return 0;
}

