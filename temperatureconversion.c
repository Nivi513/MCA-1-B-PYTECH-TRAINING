#include<stdio.h>
int main(){
	char choice ='\0';
	float fahrenheit =0.0f;
	float celsius =0.0f;

	printf("TEMPERATURE CONVERSION PROGRAM");
	printf("c.celsius to fahrenheit\n");
	printf("f.fahrenheit to celsius\n");
	printf("Is the temp in celsius (c) or fahrenheit (f)?:");
	scanf("%c",&choice);

	if(choice == 'c'){
		//c to f
		printf("Enter the temperature in celsius:");
		scanf("%f",&celsius);
		fahrenheit=(celsius*9/5)+32;
		printf("%.1f celsius is equal to %.1f fahrenheit\n",celsius,fahrenheit);
	}
	else if(choice == 'f'){
		//f to c
		printf("Enter the temperature in fahrenheit:");
                scanf("%f",&fahrenheit);
                celsius=(fahrenheit-32)*5/9;
                printf("%.1f fahrenheit is equal to %.1f celsius\n",fahrenheit,celsius);
	}
	else{
		printf("Invaild choice ! pleae select c or f \n");
	}
	return 0;
}

