
#include<stdio.h>
#include<string.h>
struct num{
	int n1,n2,n3,largest;
};
struct num a;
int main()
{
	int n1,n2,n3,largest;
  printf("Enter 1st no :\n");
  scanf("%d",&a.n1);
  
  printf("Enter 2nd no :\n");
  scanf("%d",&a.n2);
  
  printf("Enter 3rd no :\n");
  scanf("%d",&a.n3);
  
  largest=((n1>n2 && n1>n3)?n1:(n2>n3)?n2:n3);
  printf("largest number is  %d\n",largest);
  
	return 0;
}




