#include<stdio.h>
int main()
{
    
	int a,i,t=0;
	printf("enter the value :");
	scanf("%d",&a);
	
	for(i=2;i<a;i++)
	{
		if(a%i==0)
		{
			t=1;
		}
	}
	
	if(t==1)
	{
		printf("\nNot Prime(Vibhajya)");
	}
	else
	{
		printf("\nPrime(Avibhajya)");
		
	}
	

    
    return 0;
}