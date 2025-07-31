# include<stdio.h>
# include<string.h>
int main(){
	char str[100];
	printf("enter a string:\n");
	scanf("%s",str);
	printf("length of the string is:%lu \n",strlen(str));
	return 0;
}
