#include<stdio.h>
main(){
	int marks;
	printf("Enter the marks obrained by the student: ");
	scanf("%d", &marks);
	if(marks>84 && marks<=100){
		printf("The student has obtained Grade A");
	}
	else if(marks>69 && marks<85){
		printf("The student has obtained Grade B");
	}
	else if(marks>54 && marks<70){
		printf("The student has obtained Grade C");
	}
	else if(marks>39 && marks<55){
		printf("The student has obtained Grade D");
	}
	else{
		printf("The student has obtained Grade F");
	}
}
