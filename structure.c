#include<stdio.h>
#include<string.h>

  struct student{
  	int rollno;
  	char name[20];
  	char branch[40];
  };
  int main()
  {
  	struct student obj={2001297156,"prititrekha panda","CSE" };
  
 printf("*****STUDENT INFORMATION1*****\n");
printf(" student rollno is %d\n",obj.rollno);
printf(" student name is %s\n",obj.name);
printf(" student branch is %s\n",obj.branch);

struct student obj1={2001297155,"smrutirekha panda","civil" };
 printf("----STUDENT INFORMATION2----\n");
printf(" student rollno is %d\n",obj1.rollno);
printf(" student name is %s\n",obj1.name);
printf(" student branch is %s\n",obj1.branch);
  	
  	struct student obj3={};
printf("++++++++STUDENT INFORMATION3++++++\n");
printf(" student rollno is %d\n",obj3.rollno);
printf(" student name is %s\n",obj3.name);
printf(" student branch is %s\n",obj3.branch);
  		  

  	struct student obj4;
printf("++++&+++STUDENT INFORMATION4++&+++\n");
printf(" student rollno is %d\n",obj4.rollno);
printf(" student name is %s\n",obj4.name);
printf(" student branch is %s\n",obj4.branch);
	return 0;
}

