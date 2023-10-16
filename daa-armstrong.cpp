//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int result = 0, num, rem, originalnum;
//	printf("enter the number to be converted");
//	scanf("%d", originalnum);
//	num = originalnum;
//	while(num > 0)
//	{
//		rem = num%10;
//		result = result+(rem*rem*rem);
//		num/= 10;
//	}
//	
//	if(num == result){
//		printf("the number is an armstrong number");
//	}
//	else{
//		printf("the number is not an armstrong number");
//	}
//}

#include<stdio.h>
#include<math.h>
int main()
{
	int originalnum, remainder , result=0, num;
	printf("enter the number to be checked:" );
	scanf("%d", &originalnum);
	num = originalnum;
	while(num > 0)
	{
		remainder = num%10;
		result = result + remainder*remainder*remainder;
		num /= 10;
	}
	
	if(result == originalnum)
	{
		//printf("%d = %d", originalnum, result);
		printf("the number  is an armstrong number");
	}
	else{
		//printf("%d != %d ", originalnum, result);
		printf("the number  is not an armstrong number");
	}
}
