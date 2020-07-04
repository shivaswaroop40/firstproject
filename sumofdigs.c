#include<stdio.h>
main(){
	int num, sum=0, rem=0;
	printf("Enter a positive integer: ");
	scanf("%d", &num);
	while(num>0){
		rem = num%10;
		sum = sum + rem;
		num=num/10;
	}
	printf("The sum of digits is %d", sum);
}
