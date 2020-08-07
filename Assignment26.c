/**************************************************************************************/
/* Q.1 write a program which displays ASCII table.Table contains symbol ,
		Decimal,Hexadecimal and octal representation of every members
		from 0 to 255 
		


#include<stdio.h>

void DisplayASCII()
{
		int iCnt=0;
		printf("Character ASCII value\n");
		for(iCnt=0;iCnt<255;iCnt++)
		{
			printf("%c\t%d\t%x\t%o\n",iCnt,iCnt,iCnt,iCnt,iCnt);
		}
}
int main()
{
	DisplayASCII();
	return 0;
}
*/
/***************************************************************************************/
/* Q.2 Accept character from user.If character is small display its corresponding capital 
		characters, and if it small then display its corresponding capital. In other cases
		display as it is.
		
		I/p: Q		I/p : 4		I/p : m		I/p : %
		o/p: q 		O/p : 4		O/p : M		O/p : %


#include<stdio.h>

void Display(char ch)
{
	if(ch >= 'A' && ch<= 'Z')
	{
		printf("%c\n",ch+32);
	}
	else if(ch>='a' && ch<='z')
	{
		printf("%c\n",ch-32);
	}
	else
	{
		printf("%c\n",ch);
	}
}

int main()
{
	char cValue='\0';
	
	printf("Enter the character\n");
	scanf("%c",&cValue);
	
	Display(cValue);
	return 0;
}
*/
/********************************************************************************************/
/* Q.3 Accept character from user .If it is capital then display all the characters from the input 
		characters till Z.If input character is small then print all the characters in reverse order till 'a'.



#include<stdio.h>

void Display(char ch)
{
		if(ch>='A'&& ch<='Z')
		{
			while(ch<='Z')
			{
				printf("%c\t",ch);
				ch++;
			}
		}
		 if((ch>='a')&&(ch<='z'))
		{
			while(ch >='a');
			{
				printf("%c\t",ch);
				ch--;
			}
		}
}

int main()
{
	char cValue='\0';
	
	printf("Enter the character\n");
	scanf("%c\n",&cValue);
	
	Display(cValue);
	return 0;
}

*/
/***************************************************************************************************************/
/* Q.4 Accept character from user and check whether it is special symbol or not (%,!,@,#,$,^,&,*)



#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
	if((ch =='!')||(ch =='@')||(ch =='#')||(ch =='$')||(ch =='%')||(ch =='^')||(ch =='&')||(ch =='*'))
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
	BOOL bRet=FALSE;
	
	printf("Enter the character\n");
	scanf("%c",&cValue);
	
	bRet=ChkSpecial(cValue);
	
	if(bRet==TRUE)
	{
		printf("It is special symbol");
	}
	else
	{
		printf("It is not a special symbol");
	}
	
	return 0;
}
*/
/************************************************************************************************/
/* Q.5 Accept character from user and display its ASCII value in decimal, Octal, Hexadecimal format

	I/p : A
	O/p : Decimal = 65
		  Octal = 0101
		  Hexadecimal = 0x41
*/

#include<stdio.h>

void Display(char ch)
{
	printf("Decimal : %d\n",ch);
	printf("Octal : %o\n",ch);
	printf("Hexadecimal : %x\n",ch);
}

int main()
{
	char cValue='\0';
	
	printf("Enter the Character\n");
	scanf("%c\n",&cValue);
	
	Display(cValue);
	return 0;
}


				
