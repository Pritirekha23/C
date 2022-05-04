#include<stdio.h>
#include<string.h>
struct student{
	int roll;
	char name[40];
	char branch[20];	
};
int main()
{
   struct student obj;
   printf("Enter your roll\n");
   scanf("%d",&obj.roll);
   printf("Enter your name\n");
   scanf("%s",&obj.name);
   printf("Enter your branch\n");
   scanf("%s",&obj.branch);
   
 printf("----STUDENT INFORMATION----\n");
printf(" student rollno is %d\n",obj.roll);
printf(" student name is %s\n",obj.name);
printf(" student branch is %s\n",obj.branch);
  	
	return 0;
	
}

