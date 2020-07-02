#include<stdio.h>
main(){
	int opt=0;
	printf("Enter an option between 1 and 5 to get something surprising to eat:");
	scanf("%d", &opt);
	switch(opt){
		case 1:
			printf("You\'re getting a delicious pizza.\n");
			printf("At the price of Rs 239.");
			break;
		case 2:
			printf("You\'re getting  a big burger.\n");
			printf("At the price of Rs 129.");
			break;
		case 3:
			printf("You\'re getting a yummy pasta.\n");
			printf("At the price of Rs 179.");
			break;
		case 4:
			printf("You\'re getting some french fries.\n");
			printf("At the price of Rs 99.");
			break;
		case 5:
			printf("You\'re getting a sandwich.\n");
			printf("At the price of Rs 149.");
			break;
		default:
			printf("Choose any option between 1 and 5");
		
	}
}
