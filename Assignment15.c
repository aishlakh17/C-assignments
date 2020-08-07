/*************************************************************************************/
/* Q.1 Accept number of rows and column from user and display below pattern.

Input:  iRow =3 ,iCol=3

Output:	*       *       *
		*       *       *
		*       *       *

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
	int i=0,j=0;
	
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			printf("*\t");
		}
		printf("\n");
	}
}

int main()
{
	int iValue1=0,iValue2=0;
	
	printf("Enter the rows\n");
	scanf("%d",&iValue1);
	
	printf("Enter the column\n");
	scanf("%d",&iValue2);
	
	Pattern(iValue1,iValue2);
	 
	return 0;
}
*/
/*****************************************************************************************************/
/* Q.2 Accept number of rows and column from user and display below pattern.

Input: iRow=4,iCol=3

Output: 1       2       3
		1       2       3
		1       2       3
		1       2       3


#include<stdio.h>

void Pattern(int iRow, int iCol)
{
	int i=0,j=0;
	
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			printf("%d\t",j);
		}
		printf("\n");
	}
}

int main()
{
	int iValue1=0,iValue2=0;
	
	printf("Enter the rows\n");
	scanf("%d",&iValue1);
	
	printf("Enter the column\n");
	scanf("%d",&iValue2);
	
	Pattern(iValue1,iValue2);
	 
	return 0;
}
*/
/*******************************************************************************************/
/* Q.3 Accept number of rows and column from user and display below pattern.

Input:iRow=4,iCol=5

Output:	5       4       3       2       1
		5       4       3       2       1
		5       4       3       2       1
		5       4       3       2       1


#include<stdio.h>

void Pattern(int iRow, int iCol)
{
	int i=0,j=0;
	
	for(i=1;i<=iRow;i++)
	{
		for(j=iCol;j>=1;j--)
		{
			printf("%d\t",j);
		}
		printf("\n");
	}
}

int main()
{
	int iValue1=0,iValue2=0;
	
	printf("Enter the rows\n");
	scanf("%d",&iValue1);
	
	printf("Enter the column\n");
	scanf("%d",&iValue2);
	
	Pattern(iValue1,iValue2);
	 
	return 0;
}
*/
/*********************************************************************************************/
/* Q.4 Accept number of rows and column from user and display below pattern.

Input:  iRow=3  ,  iCol=4

Output:	*       #       *       #
		*       #       *       #
		*       #       *       #



#include<stdio.h>

void Pattern(int iRow, int iCol)
{
	int i=0,j=0;
	
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if((j%2)==0)
			{
				printf("#\t");
			}
			else
			{
				printf("*\t");
			}
		}
		printf("\n");
	}
}

int main()
{
	int iValue1=0,iValue2=0;
	
	printf("Enter the rows\n");
	scanf("%d",&iValue1);
	
	printf("Enter the column\n");
	scanf("%d",&iValue2);
	
	Pattern(iValue1,iValue2);
	 
	return 0;
}
*/
/*************************************************************************************/
/* Q.5 Accept number of rows and column from user and display below pattern.

Input: iRow=3 , iCol=4

Output:	1       1       1       1
		2       2       2       2
		3       3       3       3


#include<stdio.h>

void Pattern(int iRow, int iCol)
{
	int i=0,j=0;
	
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			printf("%d\t",i);
		}
		printf("\n");
	}
}

int main()
{
	int iValue1=0,iValue2=0;
	
	printf("Enter the rows\n");
	scanf("%d",&iValue1);
	
	printf("Enter the column\n");
	scanf("%d",&iValue2);
	
	Pattern(iValue1,iValue2);
	 
	return 0;
}
/*******************************************************************************************/
