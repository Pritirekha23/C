#include<stdio.h>
void fact(int *num,int *f)
 {
	int i;
	for(i=1;i<=*num;i++)
	{
		*f=*f * i;
	}
//	printf("%d\n",f);
	}
 
int main()
{
	int n=3,f=1;
	fact(&n,&f);
	printf("%d\n",f);
     return 0;
}
