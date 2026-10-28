#include<stdio.h>
int main(void)
{
	float gpa;
	printf("Enter your GPA:");
	scanf("%f",&gpa);

	if(gpa>=0 && gpa<=4){
		if(gpa<1){
			printf("Failed semester — registration suspended\n");
		}
		else if(gpa<2){
			printf("On probation for next semester\n");	
		}
		else if(gpa<3){
			printf("\n");
		}
		else if(gpa<3.5){
			printf("Dean's list for semester\n");
		}
		else{
			printf("Highest honors for semester\n");
		}
	}
	else{
		printf("Invalid Input!\n");
	}

	return 0;
}
