#include<stdio.h>
int main()
{
	int n1, n2, gcd, i;
	printf("enter the first number to be converted: ");
	scanf("%d", &n1);
	printf("enter the second number to be converted: ");
	scanf("%d", &n2);
     
     for(i>=0; i<= n1 && i<=n2; i++)
	 {
     	if(n1%i==0 && n2%i==0)
     	gcd = i;
	}
	 
    printf("the gcd of %d and %d is %d", n1 , n2 , gcd);	 
}

