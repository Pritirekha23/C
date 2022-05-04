#include<stdio.h>
#include<string.h>
struct student{
	int roll;
	char name[20];
	struct details{
	char course[30],branch[30];
	float fees;
	}d;
	
};
struct student b;
int main()
{
  printf("Enter student roll no :\n");
  scanf("%d",&b.roll);
  printf("Enter student name :\n");
  fflush(stdin);
  gets(b.name);
  printf("Enter student course :\n");
  fflush(stdin);
  gets(b.d.course); 
  
  printf("Enter student branch :\n");
  fflush(stdin);
  gets(b.d.branch); 
  printf("Enter student fees :\n");
  scanf("%f",&b.d.fees);

printf("_________STUDENT DETAILS IS HERE___________\n");
printf("Student roll no is : %d\n",b.roll);
printf("Student name no is: %s\n",b.name);
printf("Student course no is :%s\n",b.d.course);
printf("Student branch no is :%s\n",b.d.branch);
printf("Student fees no is :%f\n",b.d.fees);


	return 0;
}

