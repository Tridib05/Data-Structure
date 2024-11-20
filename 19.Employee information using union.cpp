#include <stdio.h>
#include <conio.h>
int main()
{
	union employee
	{
		int id_no;
		char name[80];
		float salary;
		char DOB[80];
	};
	union employee emp1;
	
	printf("\n Enter the ID:");
	scanf("%d",&emp1.id_no);
	printf("\n Enter the name:");
	scanf("%s", emp1.name);
	printf("\n Enter the salary:");
	scanf("%f",&emp1.salary);
	printf("\n Enter the DOB:");
	scanf("%s",emp1.DOB);
	
	printf("\n******Employee'S DETAILS******");
	printf("\n ID no. = %d",emp1.id_no);
	printf("\n NAME = %s",emp1.name);
	printf("\n Salary = %f",emp1.salary);
	printf("\n DOB	= %s",emp1.DOB);

	getch();
	return	0;
}
