#include <stdio.h>
#include <conio.h>
int main()
{
	int i,n;
	
	struct student
	{
		int roll_no;
		char name[80];
		float fees;
		char DOB[80];
	};
	
	struct student stud[63];
	printf("\n Enter the number of students:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
	    printf("\n Enter the roll number:");
        scanf("%d",&stud[i].roll_no);
        printf("\n Enter the name:");
	    scanf("%s", stud[i].name);
	    printf("\n Enter the fees:");
  	    scanf("%f",&stud[i].fees);
	    printf("\n Enter the DOB:");
	    scanf("%s",stud[i].DOB);
    }
	
	for(i=0;i<n;i++)
	{
    	printf("\n***STUDENT'S DETAILS***");
	    printf("\n ROLL No. = %d",stud[i].roll_no);
	    printf("\n NAME = %s",stud[i].name);
	    printf("\n FEES = %f",stud[i].fees);
	    printf("\n DOB	= %s",stud[i].DOB);
	}
	getch();
	return	0;
}
