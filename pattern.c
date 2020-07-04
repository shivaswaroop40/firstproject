#include<stdio.h>
main(){
	int i,j;
	for(i=1;i<6;i++)
	{
		for(j=0;j<i;j++){
			printf("01", j);
		}
		printf("\n");
	}
}
