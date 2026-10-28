#include<stdio.h>
int main(void)
{
	int i;
	printf("Enter the number to start countdown:");
	scanf("%d",&i);

	while(i>=0){
		printf("%d\n",i);
		i--;
	}	
	printf("Countdown completed\n");

	return 0;
}
