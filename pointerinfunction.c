#include<stdio.h>
void update(int*p){
	*p=*p+5;
}
int main(){
	int a=10;
	update(&a);
	printf("%d\n",a);
	return 0;
}
