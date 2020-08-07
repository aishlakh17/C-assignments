/**************************************************************************************/
/* Q.1 Accept number of rows and column from user and display below pattern.

Input:iRow=4 ,iCol=4

Output:	A       B       C       D
		A       B       C       D
		A       B       C       D
		A       B       C       D


#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	char ch='\0';
	
	if(iRow < 0)
	{
		iRow =-iRow;
	}
	
	if(iCol < 0)
	{
		iCol=-iCol;
	}
	
	for(i=1;i<=iRow;i++)
	{
		for(j=1,ch='A';j<=iCol;j++,ch++)
		{
			printf("%c\t",ch);
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
/**************************************************************************************/
/* Q.2 Accept number of rows and column from user and display below pattern.

Input:iRow=4,iCol=4

Output:	A       B       C       D
		a       b       c       d
		A       B       C       D
		a       b       c       d


#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	char ch='\0';
		
	if(iRow < 0)
	{
		iRow =-iRow;
	}
	
	if(iCol < 0)
	{
		iCol=-iCol;
	}
	
	for(i=1;i<=iRow;i++)
	{
		if((i % 2)==0)
		{
			for(j=1,ch='a';j<=iCol;j++,ch++)
			{
				printf("%c\t",ch);
			}
		}
		else
		{
			for(j=1,ch='A';j<=iCol;j++,ch++)
			{
				printf("%c\t",ch);
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
*************************************************************************************************
/* Q.3 Accept number of rows and column from user and display below pattern.

Input: iRow=3 ,iCol=4

Output:	A       A       A       A
		B       B       B       B
		C       C       C       C

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	char ch='\0';
	
	if(iRow < 0)
	{
		iRow =-iRow;
	}
	
	if(iCol < 0)
	{
		iCol=-iCol;
	}
	
	for(i=1,ch='A';i<=iRow;i++,ch++)
	{
		for(j=1;j<=iCol;j++)
		{
			printf("%c\t",ch);
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
******************************************************************************************
/* Q.4 Accept number of rows and column from user and display below pattern.

Input:iRow=4 ,iCol=5

Output:	4       4       4       4       4
		3       3       3       3       3
		2       2       2       2       2
		1       1       1       1       1



#include<stdio.h>

void Pattern(int iRow, int iCol)
{
	int i=0,j=0;
	
	if(iRow < 0)
	{
		iRow =-iRow;
	}
	
	if(iCol < 0)
	{
		iCol=-iCol;
	}
	
	for(i=iRow;i>=1;i--)
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
*******************************************************************************************
/*Q.5 Accept number of rows and column from user and display below pattern.

Input:iRow=3,iCol=4

Output:	1       2       3       4
		5       6       7       8
		9       10      11      12

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i=0,j=0,iCnt=1;
	
	if(iRow < 0)
	{
		iRow =-iRow;
	}
	
	if(iCol < 0)
	{
		iCol=-iCol;
	}
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			printf("%d\t",iCnt);
			iCnt++;
			
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