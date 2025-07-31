#include<stdio.h>
int main(){
	int x=42;
	int*p=&x;
	printf("value of x:%d\n",x);
	printf("address of x:%p\n",x);
	printf("value of p:%p\n",p);
	printf("value at p(dereferencing):%d\n",*p);
	return 0;
}
