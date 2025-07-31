#include<stdio.h>
struct student{
	int id;
	float marks;
};
int main(){
	struct student s1={101,99.5};
	printf("ID:%d\n",s1.id);
	printf("MARKS:%.2f\n",s1.marks);
	return 0;
}
