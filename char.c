
#include<stdio.h>
void fun(char *c)
{
  *c='i';	
}
int main()
{
	char c='h';
	fun(&c);
	if(c=='h')
	{
		printf("priti");
	}
	else
	{
		printf("smruti");
	}
	return 0;
}
