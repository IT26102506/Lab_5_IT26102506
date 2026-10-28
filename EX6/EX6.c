#include<stdio.h>
int main(void)
{
	char status;
	int k;

	for(k=1;k<=5;k++){
		printf("Enter status for order %d (V,I,S):",k);
		scanf(" %c",&status);
		
		if(status == 'v' || status == 'V'){
			printf("Processing order %d\n",k);
		}

		else if(status == 'i' || status == 'I'){
			printf("Skipping order %d\n",k);
			continue;
		}

		else if(status == 's' || status == 'S'){
			printf("Stopping at order %d\n",k);
			break;
		}
	}	
	return 0;
}
