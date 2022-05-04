#include<stdio.h>
void su(int *n,int *sum)
{
	int i;
	for(i=1;i<=*n;i++)
	{
		*sum=*sum+i;
	}
//	printf("sum of n natural no : %d\n",*sum);
}
int main()
{
	int i=1, num,sum=0;
	su( &num,&sum);
	printf("sum of 1 to 10 natural no is  : %d\n",sum);
	
	return 0;	
}
