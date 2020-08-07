/******************************************************************************************/
/* Q.1 Accept characters from user and check whether it is alphabet or not.

	Input : F				Input: &
	Output : TRUE			Output: FALSE


#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
	if((ch >='A' && ch<='Z') ||(ch>='a' && ch<='z'))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	char cValue='\0';
	BOOL bRet = FALSE;
	
	printf("Enter the character :");
	scanf("%c",&cValue);
	
	bRet = ChkAlpha(cValue);
	if(bRet==TRUE)
	{
		printf("It is character");
	}
	else
	{
		printf("It is not character");
	}
	
	return 0;
}

*/

/*********************************************************************************************/
/* Q.2 Accept a character from user and check whether it is capital letter or  not

		Input: F			Input: d
		Output: TRUE		Output: FALSE
		


#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
	if((ch >= 'A')&&(ch <= 'Z'))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
int main()
{
	char cValue='\0';
	BOOL bRet = FALSE;
	
	printf("Enter the character :");
	scanf("%c",&cValue);
	
	bRet = ChkCapital(cValue);
	if(bRet==TRUE)
	{
		printf("It is Capital character");
	}
	else
	{
		printf("It is not Capital character");
	}
	
	return 0;
}
*/
/************************************************************************************************/
/* Q.3 Accept character from user and check whether it is digit or not

		Input : 7
		Output : TRUE
		

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
	if(ch >='0' && ch<= '9')
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
	
}
int main()
{
	char cValue='\0';
	BOOL bRet = FALSE;
	
	printf("Enter the character :");
	scanf("%c",&cValue);
	
	bRet = ChkDigit(cValue);
	if(bRet==TRUE)
	{
		printf("It is Digit");
	}
	else
	{
		printf("It is not Digit");
	}
	
	return 0;
}
*/
/*********************************************************************************************************/
/* Q.4 Accept character from user and check whether it is small case or not(a-z)
		
		Input: g 
		Output: TRUE

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
	if(ch >='a' && ch<= 'z')
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
	
}
int main()
{
	char cValue='\0';
	BOOL bRet = FALSE;
	
	printf("Enter the character :");
	scanf("%c",&cValue);
	
	bRet = ChkSmall(cValue);
	if(bRet==TRUE)
	{
		printf("It is Small character");
	}
	else
	{
		printf("It is not Small character");
	}
	
	return 0;
}

*/

/*********************************************************************************/
/* Q.5 Accept division of student from user and depends on the division display exam timing .
		There are 4 divisions in school as A,B,C,D. Exam of division A at 7AM , B at 8:30Am,
		C at 9:20AM, and D at 10:30AM. Application should be case insensitive.
	
	
*/

#include<stdio.h>

void DisplaySchedule(char ChDiv)
{
	if((ChDiv=='A')||(ChDiv=='a'))
	{
		printf("Your exam is at 7AM");
	}
	else if((ChDiv=='B')||(ChDiv=='b'))
	{
		printf("Your exam is at 8:30AM");
	}
	else if((ChDiv=='C')||(ChDiv=='c'))
	{
		printf("Your exam is at 9:20AM");
	}
	else if((ChDiv=='D')||(ChDiv=='d'))
	{
		printf("Your exam is at 10:30AM");
	}
}

int main()
{
	char ChDiv;
	
	printf("Enter the Division\n");
	scanf("%c",&ChDiv);
	
	DisplaySchedule(ChDiv);
	
	return 0;
}