# include <stdio.h>
int main(){
	//width
	int num1=1;
	int num2=20;
	int num3=300;

	printf("%d \n",num1);
	printf("%d \n",num2);
	printf("%d \n",num3);
	printf("%2d \n",num1);
	printf("%3d \n",num2);
	printf("%4d \n",num3);

	//precision

	float price1=19.99;
	float price2=1.50;
	float price3=-100.00;

	printf("%.2f \n",price1);
	printf("%.2f \n",price2);
	printf("%.2f \n",price3);
	printf("%.1f \n",price1);
	printf("%.1f \n",price2);
	printf("%.1f \n",price3);

	// width precision flags
	
        float prices1=19.99;
        float prices2=1.50;
        float prices3=-100.00;
 
	printf("%+7.2f \n",prices1);
        printf("%+7.2f \n",prices2);
        printf("%+7.2f \n",prices3);

	return 0;
}



