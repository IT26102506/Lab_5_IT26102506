#include<stdio.h>
int main(void)
{
	float wt_lb, ht_in;
	printf("Enter your Weight in pounds:");
	scanf("%f",&wt_lb);
	printf("Enter your Height in inches:");
	scanf("%f",&ht_in);
	
	float bmi = (wt_lb/(ht_in*ht_in))*703;
	printf("Your BMI value is: %f\n",bmi);

	if(bmi<18.5){
		printf("Underweight\n");
	}
	else if(bmi>=18.5 && bmi<25){
		printf("Normal Weight\n");
	}
	else if(bmi>=25 && bmi<30){
		printf("Overweight\n");
	}
	else if(bmi>=30){
		printf("Obese\n");
	}
	else{
		printf("Invalid Input\n");
	}

	return 0;
}

