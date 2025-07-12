# include<stdio.h>
# include<stdbool.h>
int main(){
	char name[] = "Nivetha";
        int age = 22;
        float mark = 97.6;
        double pi = 3.167834923612098;
        char grade = 'A';
        char symbol = '!';
        char email[] = "nivi513@gmail.com";

	printf("My name is %s \n",name);
	printf("My age is %d \n",age);
	printf("My mark is %f \n",mark);
	printf("The number pi %15lf \n",pi);
	printf("My grade is %c \n",grade);
	printf("My symbol is %c \n",symbol);
	printf("My email is %s \n",email);

	bool isstudent =true;
	if(isstudent){
		printf("You are a student");
	}
	else{
		printf("You are not a student");
	} 
	 return 0;
}

