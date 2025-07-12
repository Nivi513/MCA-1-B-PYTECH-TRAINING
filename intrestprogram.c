#include<stdio.h>
#include<math.h>
int main(){
	double principal = 0.0;
	double rate = 0.0;
	int years = 0;
	int timescompunded = 0;
	double total =0.0;

	printf("COMPOUND INTEREST CALCULATOR\n");
	printf("Enter the principal (p): ");
        scanf("%lf",&principal);
        
        printf("Enter the intrest rate % (r) :");
	scanf("%lf",&rate);
	rate = rate/100;

	printf("Enter the # of years (t) :");
	scanf("%d",&years);

	printf("Enter # of times compunded per year (n):");
	scanf("%d",&timescompunded);
	total = principal*pow(1+rate/timescompunded,timescompunded*years);
	printf("After %d years,the total willbe $ %.2lf",years,total);

	return 0;
}
		
	
