#include<stdio.h>
int main(void)
{
	int i;
	
	do{
		printf("Please enter positive number:");
		scanf("%d",&i);
	}while(i<=0);

	printf("You entered: %d\n",i);

	return 0;
}
