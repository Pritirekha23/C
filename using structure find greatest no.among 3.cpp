#include<stdio.h>
#include<string.h>
struct num{
	int n1,n2,n3;
};
struct num a;
int main()
{
	int n1,n2,n3;
  printf("Enter 1st no :\n");
  scanf("%d",&a.n1);
  
  printf("Enter 2nd no :\n");
  scanf("%d",&a.n2);
  
  printf("Enter 3rd no :\n");
  scanf("%d",&a.n3);
  
  if((a.n1>a.n2) && (a.n1>a.n3))
  {
  	printf("%d is greater",a.n1);
  }
  else if((a.n2>a.n1) && (a.n2>a.n3))
  {
  	printf("%d is greater",a.n2);
  }
  else{
  	printf("%d is greater",a.n3);
  	
 return 0;
  	
  }
  
  	  
  
	return 0;
}

