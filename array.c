# include<stdio.h>
int main(){
	int arr[5],sum=0,i=0;
	printf("enter  numbers:\n");
	while(i<5){
		scanf("%d",&arr[i]);
		sum+=arr[i];
		i++;
	}
	printf("sum of elements:%d\n",sum);
	return 0;
}
