#include<stdio.h>
int main(){
	int a=5;
	int b=10;
	int*p1=&a;
	int*p2=&a;
	int*p3=&b;
	if(p1==p2){
		printf("p1 and p2 pointer to the same variable\n");
	}
	else{
		printf("p1 and p3 point to different variable\n");
	}
	return 0;
	}
