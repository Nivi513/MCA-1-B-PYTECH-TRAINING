#include<stdio.h>
#include<string.h>
int main(){
	char name [50];

	printf("Enter your name:");
	fgets(name,sizeof(name),stdin);
	name[strlen(name) -1] = '\0';

	if(strlen(name) ==0){
		printf("you did not enter your name");
	}
	else{
		printf("you entered your name %s ",name);
	}
	return 0;
}
