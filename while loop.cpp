#include<stdio.h>
int main()
{
	int p,a,count;
	float r,si;
	
	count=1;
	while (count<=3)
	{
		printf("Enter value of principle: ");
		scanf("%d",&p);
		printf("Enter value of amount: ");
		scanf("%d",&a);
		printf("Enter the rate of interest: ");
		scanf("%f",&r);
		
		si=p*r*a/100;
		
		printf("Simple interest = %f\n",si);
		
		count=count+1;
		
	}
	return 0;
}
