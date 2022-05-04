#include<stdio.h>
#include<string.h>
struct student1{
	int roll;
	float fees;
	char name[20];
	char branch[20];
	float ttmark;
};
struct student1 p[3];
int main()
{
 int i,s;
 printf("Enter the student informations.....\n");
 for(i=0;i<10;i++)
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
 printf("Enter the roll number you want to search for details ......\n");
 scanf("%d",&s);
 printf(" that perticular student details is \n");
 for(i=0;i<10;i++)
{
	if(s==p[i].roll)
	{
	printf("the roll no is %d\n",p[i].roll);
	printf("the fees  %f\n",p[i].fees);
	printf("the name is %s\n",p[i].name);
	printf("the branch is %d\n",p[i].branch);
	printf("the totalmark is %f\n",p[i].ttmark);
   }
}
 
 
 return 0;
}

