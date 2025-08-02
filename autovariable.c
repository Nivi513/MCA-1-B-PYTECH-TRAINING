#include<stdio.h>
int main(){
	printf("Inside main block:\n");
	{
		auto int x=10;
		printf("Auto variable x=%d\n",x);
	}
	return 0;
}
