/******************************************************************/
/* Q.1 Write a program which accept two strings from user and display 
		length of both strings.
		
		Input: "Marvellous"
				"Infosystems"
		Output:10 11
		
#include<stdio.h>

void Pattern(char *str1,char *str2)
{
	int iCnt1=0,iCnt2=0;
	
	if(str1== NULL)
	{
		return;
	}
	if(str2==NULL)
	{
		return;
	}
	
	while (*str1 != '\0')
	{
		iCnt1++;
		str1++;
	}
	while(*str2 != '\0')
	{
		iCnt2++;
		str2++;
	}
printf("%d\t%d",iCnt1,iCnt2);
}

int main()
{
	char arr[20];
	char brr[20];
	
	printf("Enter first string\n ");
	scanf("%s",&arr);
	
	printf("Enter Second string\n ");
	scanf("%s",&brr);
	
	Pattern(arr,brr);
	return 0;
}
*/
/***********************************************************************/
/* Q.2  Write a program which accept two strings from user and display count of 
		capital from both strings.
		
		Input:"MarVellOus"
				"InFosyStEMs"
		Output:3	4

#include<stdio.h>

void Pattern(char *str1,char *str2)
{
	int iCnt1=0,iCnt2=0;
	
	if(str1== NULL)
	{
		return;
	}
	if(str2==NULL)
	{
		return;
	}
	
	while (*str1 != '\0')
	{
		if((*str1>='A')&&(*str1<='Z'))
		{
		iCnt1++;
		}
		str1++;
	}
	while(*str2 != '\0')
	{
		if((*str2>='A')&&(*str2<='Z'))
		{
		iCnt2++;
		}
		str2++;
	}
printf("%d\t%d",iCnt1,iCnt2);
}

int main()
{
	char arr[20];
	char brr[20];
	
	printf("Enter first string\n ");
	scanf("%s",&arr);
	
	printf("Enter Second string\n ");
	scanf("%s",&brr);
	
	Pattern(arr,brr);
	return 0;
}
*/
/************************************************************************************/
/* Q.3 Write a program which accept two strings from user and check whether both the strings are not equal or not 
		without considering  its case
		Input:"MarvelloUs"
				"MARvellOUS"
		Output:TRUE
	
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL StrCmpX(char *str1,char *str2)
{
	if(str1== NULL)
	{
		return FALSE;
	}
	if(str2==NULL)
	{
		return FALSE;
	}
	while((*str1 != '\0')&&(*str2 != '\0'))
	{
		if(*str1 != *str2)
		{
			if((*str1>='A')&&(*str1<='Z'))
			{
				*str1=*str1+32;
			}
			else if((*str1>='a')&&(*str1<='z'))
			{
				*str1=*str1-32;
			}
		}
		if(*str1 != *str2)
		{
			break;
		}
		str1++;
		str2++;
	}
	
	if((*str1=='\0')&&(*str2=='\0'))
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
	char arr[20];
	char brr[20];
	BOOL bRet=FALSE;
		
	printf("Enter first string\n");
	scanf("%s",&arr);
	
	
	printf("Enter second string\n");
	scanf("%s",&brr);
	
	bRet=StrCmpX(arr,brr);
	
	if(bRet==TRUE)
	{
		printf("These two strings are equal");
	}
	else
	{
		printf("These two strings are not equal");
	}
	return 0;
}
*/
/******************************************************************************/
/* Q.4 Write a program which accept two strings from user and concat second string 
at the end of first string in reverse order.

	Input:"Marvellous"
		  "Python"
	Output:""

#include<stdio.h>

void strCatX(char *str1,char *str2)
{
	char *Start=str2;
	char *End=str2;
	char temp,temp1;
	int iCnt=0;
	if(str1== NULL)
	{
		return;
	}
	if(str2==NULL)
	{
		return;
	}
	
		while(*str1 !='\0')
		{
			str1++;
		}
	
		while(*End !='\0')
		{
			End++;
			
		}
		End--;
		
		while(Start<=End)
		{
			temp=*Start;
			*Start=*End;
			*End=temp;
			
			Start++;
			End--;	
			iCnt++;
		}
		
		
		while(*str2 !='\0')
		{

			*str1= *str2;
			*str1++;
			*str2++;
		}
		
	*str1='\0';
}

int main()
{
	char arr[20];
	char brr[20];
	
	printf("Enter the strings\n");
	scanf("%s",&arr);
	
	printf("Enter second string\n");
	scanf("%s",&brr);
	
	strCatX(arr,brr);
	printf("%s",arr);
	
	return 0;
}
	*/
/************************************************************************/
/* Q.5 Write a program which accept two string from user and concat
 alternate characters from second string at the end of first string
	Input:MARvellOUS
		  Infosystems
    Output:


#include<stdio.h>

void strCatX(char *str1,char *str2)
{
	if(str1==NULL)
	{
		return;
	}
	if(str2==NULL)
	{
		return;
	}
	
	while(*str1 !='\0')
	{
		str1++;
	}
	while(*str2 != '\0')
	{
		*str1=*str2;
		str1++;
		str2=str2+2;
	}
}
int main()
{
	char arr[20]="Marvellous";
	char brr[20]="Infosystems";
	
	strCatX(arr,brr);
	
	printf("%s",arr);
	return 0;
}
*/	
	
	