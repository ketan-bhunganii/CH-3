#include<conio.h>
#include<stdio.h>
main()
{
	int num1;
	int num2;
	int sum;
	clrscr();
	num1=12;
	num2=6;
	sum=num1+num2;

	printf("addition of %d and %d is %d\n",num1,num2,sum);
	sum= num1-num2;
	printf("subtraction of %d and %d is %d\n",num1,num2,sum);
	sum=num1*num2;
	printf("multiplication of %d and %d is %d\n",num1,num2,sum);
	sum=num1/num2;
	printf("division of %d and %d is %d\n",num1,num2,sum);
	sum=num1%num2;
	printf("modulo of %d and %d is %d\n",num1,num2,sum);

  getch();








}