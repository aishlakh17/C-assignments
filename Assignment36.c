/**********************************************************************/
/* Q.1 Write a program which accept 2 strings from user and concat N characters 
		of second string after first string . Value of N should be accepted 
		from user.(Implement strncat() function).
		Note : If third parameter is greater than the size of second string then 
		concat whole string after first string.
		
		Input: "Marvellous Infosystem"
				"Logic Building"
				5
		Output:"Marvellous Infosystem Logic"
		
		
#include<stdio.h>

void StrnCatX(char *src, char *dest,int iCnt)
{
	if((src == NULL)||(dest == NULL))
	{
		return;
	}
	
	while (*src != '\0')
	{
		src++;
	}
	
	while ((*dest != '\0')&&(iCnt != 0))
	{
		*src = *dest;
		src++;
		dest++;
		iCnt--;
	}
	*dest = '\0';
} 

int main()
{
	char arr[50]="Marvellous Infosystem";
	char brr[30]="Logic Bilding";
	int iValue=0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
		
	StrnCatX(arr,brr,iValue);
	
	printf("%s",arr);
	return 0;
}
*/
/*********************************************************************/
/* Q.2 Write a program which accept 2 string from user and check whether 
		contents of two strings are equal or not.(Implement strcmp() function).
		Input : "Marvellous Infosystem"
				"Marvellous Infosystem"
				
		Output:TRUE
		

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL StrCmpX(char *src,char *dest)
{
	if((src ==NULL)||(dest == NULL))
	{
		return FALSE;
	}
	
	while((*src != '\0')&& (*dest !='\0'))
	{
		if(*src != *dest)
		{
			break;
		}
		src++;
		dest++;
	}
	
	if((*src =='\0')&&(*dest=='\0'))
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
	BOOL bRet=TRUE;
	char arr[50]="Marvellous Infosystem";
	char brr[30]="Marvellous";
	
	bRet=StrCmpX(arr,brr);
	
	if(bRet == TRUE)
	{
		printf("Both strings are equal");
		
	}
	else
	{
		printf("Both strings are not equal");
	}
	
	return 0;
}
*/
/*****************************************************************************/
/* Q.3 Write a program which accept 2 strings from user and check whether first N 
		contents of two strings are equal or not.(Implement strcmp()function).
		Note:If third parameter is greater than the size of second string then 
		concat whole string after first string.
		
		Input:"Marvellous Infosystem"
				"Marvellous Infosystem"
				10
		Output:TRUE


#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL StrNCmpX(char *src,char *dest,int iCnt)
{
	if((src==NULL)||(dest==NULL))
	{
		return FALSE;
	}
	
	while((*src != '\0')&&(*dest != '\0')&&(iCnt != 0))
	{
		if((*src != *dest))
		{
			break;
		}
		
		src++;
		dest++;
		iCnt--;
	}
	
	if((iCnt == 0))
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
	BOOL bRet=TRUE;
	char arr[50]="Marvellous Infosystem";
	char brr[50]="Marvellous Logic Building";
	
	bRet=StrNCmpX(arr,brr,10);
	
	if(bRet==TRUE)
	{
		printf("Both strings are equal");
	}
	else
	{
		printf("Both strings are not equal");
	}
	return 0;
}
*/
/*********************************************************************************************/
/* Q.4 Accept string from user and reverse the contents of that string by toggling the case
	
	Input: "aCBdef"
	Output:"FEDcbA"
	


#include<stdio.h>

void StrRevTogX(char *str)
{
	char temp;
	char *first,*last;
	first=str;
	last=str;
	
	if(str==NULL)
	{
		return;
	}
	while(*last !='\0')
	{
		last++;
	}
	last--;
	
	while(first < last)
	{
		if((*first>='A')&&(*first<='Z'))
		{
			*first= *first +32;
		}
		else if((*first >='a')&&(*first <='z'))
		{
			*first=*first -32;
		}
		if((*last >='A')&&(*last<='Z'))
		{
			*last=*last +32;
		}
		else if((*last>='a')&&(*last<='z'))
		{
			*last=*last-32;
		}
		temp = *first;
		*first = *last;
		*last = temp;
		first++;
		last--;
	}
}
int main()
{
	char arr[50]="MarVeLlous";
	
	StrRevTogX(arr);
	
	printf("%s",arr);
	
	return 0;
}
*/
/********************************************************************************/
/* Q.5 Accept string from user and check whether the string is palindrome or not without 
		considering its case.
		
		Input:"1abccBA1"
		Output:TRUE
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL StrPallindrome(char *str)
{
	char *start=str;
	char *end=str;
	
	if(str==NULL)
	{
		return FALSE;
	}
	
	while(*end !='\0')
	{
		end++;
	}
	end--;
	
	while(start<end)
	{
		
		if(*start != *end)
		{
			
			if((*start>='A')&&(*start<='Z'))
			{
				*start=*start+32;
			}
			else if((*start>='a')&&(*start<='z'))
			{
				*start=*start-32;
			}
		}
		if(*start != *end)
		{
			break;
		}
		start++;
		end--;
	}
	
	if(start < end)
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
}


int main()
{
	BOOL bRet;
	char arr[20]="1abccBa1";
	
	bRet=StrPallindrome(arr);
	
	if(bRet==TRUE)
	{
		printf("String is palindrome");
	}
	else
	{
		printf("String is not Palindrome");
	}
	return 0;
}