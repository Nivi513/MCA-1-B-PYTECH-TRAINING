#include<stdio.h>
void demo(){
	auto int a=0;
	static int s=0;
	a++;
	s++;
	printf("Auto=%d,static=%d\n",a,s);
}
int main(){
	demo();
	demo();
	demo();
	return 0;
}
