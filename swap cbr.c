// swaping of two numbers by using call by reference
#include<stdio.h>
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("after swaping  inside swap function a=%d , b=%d\n" , *a,*b);
}
int main()
{
	int a=5,b=10;
	swap(&a,&b);
	printf("after swapping inside main function a=%d ,b=%d ", a,b);
	return 0;
}
