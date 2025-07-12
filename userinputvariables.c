# include <stdio.h>
int main(){
	char name[30];
	int age;
	float gpa;
	char grade;
        getchar();
	printf("Enter your name:");
	fgets(name,sizeof(name),stdin);
	printf("Enter your age:");
	scanf("%d",&age);
	printf("Enter your gpa:");
	scanf("%f",&gpa);
	printf("Enter your grade:");
	scanf(" %c",&grade);
	return 0;
}

