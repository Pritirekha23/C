#include<stdio.h>
#include<string.h>
#include<math.h>
struct pntr{
	int a1,a2,b1,b2,dis;
};
struct pntr p;
struct pntr *n=&p;
int main()
{
	int a1,a2,b1,b2,dis;

   printf("Enter the value of (a1,b1)\n");
   scanf("%d %d",&p.a1,&p.b1);

   printf("Enter the value of (a2,b2)\n");
   scanf("%d %d",&p.a2,&p.b2);
  
  p.dis=sqrt((p.a2-p.a1)*(p.a2-p.a1) + (p.b2-p.b1)*(p.b2-p.b1));
   
   printf("Distance between two points is %d\n",p.dis);

	return 0;
}

