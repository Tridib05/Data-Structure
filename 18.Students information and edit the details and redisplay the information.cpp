#include <stdio.h>
#include <conio.h>
#include<string.h>
int main()
{
	int n,i;
	struct student
	{
		int roll_no;
		char name[80];
		float fees;
		char DOB[80];
	};
	
	struct student stud[63];
	printf("\n Enter the no of Students:");
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
	
	    printf("\n\n******STUDENT'S DETAILS******");
	    printf("\n ROLL No. = %d",stud[i].roll_no);
	    printf("\n NAME = %s",stud[i].name);
	    printf("\n FEES = %f",stud[i].fees);
	    printf("\n DOB	= %s",stud[i].DOB);
	}
	
	int num,R1;
	float R3;
	char R2[20],R4[20];
	
	printf("\n\n Enter the student's no for record editing:");
	scanf("%d",&num);
	
	num=num-1;
	
	printf("\n Enter the new roll_no:");
	scanf("%d",&R1);
	
	printf("\n Enter the new name:");
	scanf("%s", R2);
	//gets(R2);
	
	printf("\n Enter the new fees:");
	scanf("%f",&R3);
	
	printf("\n Enter the new DOB:");
	scanf("%s", R4);
	//gets(R4);


	stud[num].roll_no=R1;
	strcpy(stud[num].name,R2);
	stud[num].fees=R3;
	strcpy(stud[num].DOB,R4);

    for(i=0;i<n;i++)
    {

	    printf("\n\n******STUDENT'S DETAILS of % d******", num+1);
	    printf("\n ROLL No. = %d",stud[i].roll_no);
	    printf("\n NAME = %s",stud[i].name);
	    printf("\n FEES = %f",stud[i].fees);
	    printf("\n DOB	= %s",stud[i].DOB);
    }
	getch();
	return	0;
}
