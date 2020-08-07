/***************************************************************************/
/* Q.1 Write a recursive program which display below pattern

		Output:	*	*	*	*	*
		
#include<stdio.h>

void DisplayI()
{
	int i=1;
	printf("Inside Iteration function\n");
	for(i=1;i<=5;i++)
	{
		printf("*\t");
	}
	printf("\n");
}

void DisplayR()
{
	static int i=1;					//Local static variable
	
	if(i<=5)
	{
		printf("*\t");
		i++;
		
		DisplayR();					// Recursive call
	}

}

int main()
{
	printf("Inside main\n");
	
	DisplayI();
	
	DisplayR();
	
	printf("\nEnd of main");
	return 0;
}
*/

/******************************************************************************************/
/* Q.2 Write a recursive program which display below pattern
		
		Output:1	2	3	4	5	


#include<stdio.h>

void DisplayI()
{
	int i=1;
	printf("Inside Iteration function\n");
	for(i=1;i<=5;i++)
	{
		printf("%d\t",i);
	}
	printf("\n");
}

void DisplayR()
{
	static int i=1;
	
	if(i<=5)
	{
		printf("%d\t",i);
		i++;
		DisplayR();
	}
}

int main()
{
	printf("Inside main\n");
	
	DisplayI();
	
	DisplayR();
	
	printf("\n End of main");
	return 0;
}
*/
/*******************************************************************************/
/* Q.3  Write a recursive program which display below pattern
	
	Output:	5	4	3	2	1


#include<stdio.h>

void DisplayI()
{
	int i=5;
	
	for(i=5;i>=1;i--)
	{
		printf("%d\t",i);
	}
	printf("\n");
}

void DisplayR()
{
	static int i=5;
	
	if(i>=1)
	{
		printf("%d\t",i);
		i--;
		DisplayR();
	}
}

int main()
{
	printf("Inside main\n");
	
	DisplayI();
	
	DisplayR();
	
	printf("\n End of main");
	return 0;
}

/*****************************************************************************************/
/* Q.4 Write a recursive program which display below pattern
		
		Output: A	B	C	D	E


#include<stdio.h>

void DisplayI()
{
	int i=1;
	 char ch;
	
	for(i=1,ch='A';i<=5;i++,ch++)
	{
		printf("%c\t",ch);
	}
	printf("\n");
}

void DisplayR()
{
	static int i=1;
	static char ch='A';
	
	if(i<=5)
	{
		printf("%c\t",ch);
		i++;
		ch++;
		DisplayR();
	}
}

int main()
{
	printf("Inside main\n");
	
	DisplayI();
	
	DisplayR();
	
	printf("\n End of main");
	return 0;
}
*/

/********************************************************************************/
/* Q.5 Write a recursive program which display below pattern

		Output: a b c d e
	*/
	
#include<stdio.h>

void DisplayI()
{
	int i=1;
	 char ch;
	
	for(i=1,ch='a';i<=5;i++,ch++)
	{
		printf("%c\t",ch);
	}
	printf("\n");
}

void DisplayR()
{
	static int i=1;
	static char ch='a';
	
	if(i<=5)
	{
		printf("%c\t",ch);
		i++;
		ch++;
		DisplayR();
	}
}

int main()
{
	printf("Inside main\n");
	
	DisplayI();
	
	DisplayR();
	
	printf("\n End of main");
	return 0;
}