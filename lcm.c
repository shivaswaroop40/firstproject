#include <stdio.h>
int main() {
    int n1, n2, minimum;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
	
	if(n1>n2){
	minimum = n1;
}
	else{
		minimum=n2;
	}


    while (1) {
        if (minimum % n1 == 0 && minimum % n2 == 0) {
            printf("The LCM of %d and %d is %d.", n1, n2, minimum);
            break;
        }
	minimum++;
    }
    return 0;
}
