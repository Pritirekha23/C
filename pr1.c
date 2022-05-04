#include<stdio.h>
int main()
{
		int a,i;
	for(a=1;a<=5;a++){
		for(i=1;i<=23;i++){
	if(i==13||i==17||i==a+12||i==19||i==23||a==5&&i>=19&&i<=23||i==1&&a<=3||i==5&&a>=3||a==5&&i<=5||a==1&&i<=5||a==3&&i<=5){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
