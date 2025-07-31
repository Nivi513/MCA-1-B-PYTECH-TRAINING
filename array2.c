#include<stdio.h>
#include<string.h>
int main(){
	char src[100],dest[100];
	printf("enter source string:\n");
	scanf("%s",src);
	strcpy(dest,src);
	printf("copied string:%s\n",dest);
	return 0;
}
