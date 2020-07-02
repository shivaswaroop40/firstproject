#include<stdio.h>
main(){
	int a,b,c,d;
	printf("Enter the first number: ");
	scanf("%d", &a);
	printf("Enter the second number: ");
	scanf("%d", &b);
	printf("The numbers before swapping are a=%d and b=%d\n", a,b);
	c=a;
	d=b;
	a=d;
	b=c;
	printf("The numbers after swapping are a=%d and b=%d", a,b);
}
