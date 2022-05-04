#include<stdio.h>
#include<string.h>
struct student1{
	int roll;
	float fees;
	char name[20];
	char branch[20];
	float ttmark;
};
struct student1 p[10];
int main()
{
 int i,m=156;
 printf("Enter the student informations.....\n");
 for(i=0;i<9;i++)
 {
 	printf("\n Enter roll number \n");
 	scanf("%d",&p[i].roll);
 	printf("Enter fees\n");
 	scanf("%f",&p[i].fees);
 	printf("Enter name\n");
 	fflush(stdin);
 	gets(p[i].name);
 	printf("Enter branch\n");
 	fflush(stdin);
 	gets(p[i].branch);
 	printf("Enter totalmark\n");
 	scanf("%f",&p[i].ttmark);
 	
 }
 printf("Enter the roll number you want to search.......\n");
 scanf("%d",&p[i].roll);
 if(p[i].roll==m)
 {
 	printf("your search is success..");
 }
 else
 {
 	printf("Please enter valid roll number that is present in this data...\n");
 }
 	return 0;
}

