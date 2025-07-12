#include<stdio.h>
int main (){
	int age;

	printf("enter your age :");
	scanf("%d",&age);

	if(age >=18){
		printf("you are an adult");
	}
	else if(age < 0){
		printf("you haven't born yet");
	}
	else if(age ==0){
		printf("you just born");
	}
	else if(age >=65){
		printf("you are a senior");
	}
	else {
	       printf("you are not an adult");
	}
return 0;
}
