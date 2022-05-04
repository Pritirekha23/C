//using pointer check a number is even or odd
#include<stdio.h>
int main()
{
	int num,*ptr;
	ptr=&num;
	printf("enter a number\n",num);
	scanf("%d",&num);
	if(*ptr%2==0)
	{
		printf("even no.");
	}
	else
	{
		printf("odd no.");
	}
	return 0;
}
