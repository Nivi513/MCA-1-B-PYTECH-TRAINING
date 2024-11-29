#include<stdio.h>
void add(int a,int b)
{

printf("Sum :%d\n",a+b);
}
void subtraction(int a,int b){


printf("Difference : %d\n",a-b);
}
int main()
{
void(*operations[])(int,int)= {&add, &subtraction};
for(int i=0;i<2;i++){
operations[i](10,5);
}
return 0;



}
