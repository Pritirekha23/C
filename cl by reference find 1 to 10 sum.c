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
	int i=1,n=10,sum=0;
	
	su( &n,&sum);
	printf("sum of 1 to 10 natural no : %d\n",sum);
	return 0;	
}
