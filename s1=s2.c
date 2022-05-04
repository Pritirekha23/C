#include<stdio.h>
#include<stdlib.h>
struct student{
	int roll;
	float fees;
	char name[20];
	char branch[20];
	float ttmark;
};
struct student s1,s2;
int main()
{
  printf("Enter your roll number\n");
  scanf("%d",&s1.roll);
  printf("Enter your fess\n");
  scanf("%f",&s1.fees);
  printf("Enter your name\n");
  scanf("%s",&s1.name);
  printf("Enter your totalmark\n");
  scanf("%f",&s1.ttmark);
  
  printf("Enter your branch\n");
  scanf("%s",&s1.branch);
   
   s2=s1;
   
   printf("\n roll is:%d",s2.roll);
   printf("\n fees is:%f",s2.fees);
   printf("\n Name is:%s",s2.name);
   
   printf("\n totalmark is:%f",s2.ttmark);
   printf("\n Branch is:%s",s2.branch);
   
   
  
	return 0;
}

