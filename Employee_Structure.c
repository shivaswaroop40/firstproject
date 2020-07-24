#include<stdio.h>
struct emp{
	int age;
	char name[15];
	char ph[11];
	int sal;
};
main()
{
	int n, i=0;
	struct emp employee[20];
	printf("Enter the number of employees you want to add: ");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter name: ");
		scanf("%s", employee[i].name);
		printf("Enter age: ");
		scanf("%d", &employee[i].age);
		printf("Enter phone number: ");
		scanf("%s", employee[i].ph);
		printf("Enter salary: ");
		scanf("%d", &employee[i].sal);
	}
	printf("\nName\tAge\tPhone Number\tSalary\n");
	for(i=0;i<n;i++)
	{
		printf("%s\t%d\t%s\t%d\n", employee[i].name, employee[i].age, employee[i].ph, employee[i].sal);
	}
}
