
#include<stdio.h>
struct std{
	int roll;
	char name[30];
	char course[20];
	float marks;
};
struct std s[5];
int main()
{
	int i,r;
	for(i=0;i<5;i++)
	{
		printf("Record for student %d\n",i+1);
		printf("Enter the roll no\n");
		scanf("%d",&s[i].roll);
		printf("Enter the name\n");
		fflush(stdin);
		gets(s[i].name);
		printf("Enter the course\n");
		fflush(stdin);
		gets(s[i].course);
		printf("Enter the marks\n");
		scanf("%f",&s[i].marks);
}
    printf("Enter the roll number to get the student details\n");
    scanf("%d",&r);
    printf("*******STUDENT DETAILS*******\n");
    for(i=0;i<5;i++)
    {
    	if(r==s[i].roll)
    	{
    		printf("Before editing the details are\n");
    		printf("The roll no is:%d\n",s[i].roll);
    		printf("The name is:%s\n",s[i].name);
    		printf("The course is:%s\n",s[i].course);
    		printf("The mark is:%f\n",s[i].marks);
    	printf("Enter the details to edit\n");
    	printf("Enter the roll no\n");
		scanf("%d",&s[i].roll);
		printf("Enter the name\n");
		fflush(stdin);
		gets(s[i].name);
		printf("Enter the course\n");
		fflush(stdin);
		gets(s[i].course);
		printf("Enter the marks\n");
		scanf("%f",&s[i].marks);
    		printf("After editing the details are\n");
			printf("The roll no is:%d\n",s[i].roll);
    		printf("The name is:%s\n",s[i].name);
    		printf("The course is:%s\n",s[i].course);
    		printf("The mark is:%f\n",s[i].marks);
    		break;
		}
		
	}
	return 0;
	
}

