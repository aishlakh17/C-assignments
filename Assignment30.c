/**************************************************************************************************************/
/* Q.1 Write a program which accept string from user and copy the content of the string into another string.

Input: "Marvellous Multi OS"

Output: "Marvellous Multi OS"


#include<stdio.h>

void StrCpyX(char *src,char *dest)
{
	if(src == NULL)
	{
		return;
	}
	
	while(*src != '\0')
	{
		*dest = *src ;
		src++;
		dest++;
	}
	*dest='\0';
}

int main()
{
	char arr[30]="Marvellous Multi OS";
	char brr[30];
	
	StrCpyX(arr,brr);
	
	printf("Copied String :%s",brr);
	return 0;
}
*/
/****************************************************************************************************************/
/* Q.2	Write a program which accept string from user and copy the content of the string into another string.

		Input: "Marvellous Multi OS"

		Output: "Marvellous
		

#include<stdio.h>

void StrnCpyX(char *src,char *dest,int iCnt)
{
	if(src == NULL)
	{
		return;
	}
	
	while((*src != '\0')&& (iCnt !=0))
	{
		*dest = *src ;
		src++;
		dest++;
		iCnt--;
	}
	*dest='\0';
}

int main()
{
	char arr[30]="Marvellous Multi OS",brr[30];
	//char brr[30];
	
	
	StrnCpyX(arr,brr,14);
	
	printf("Copied String :%s",brr);
	return 0;
}

*/
/************************************************************************************************************************/
/* Q.3 Write a program which accept string from user and copy capital characters of that string into another string.

	Input:"Marvellous Multi OS"
	
	Output: MMOS
	
#include<stdio.h>

void StrCpyCap(char *src,char *dest)
{
	if(src == NULL)
	{
		return;
	}
	
	while((*src != '\0'))
	{
		if((*src >='a')&&(*src <='z'))
		{
			*dest = *src ;
			dest++;
		}
		src++;
	}
	*dest='\0';
}

int main()
{
	char arr[30]="Marvellous Multi OS";
	char brr[30];
	
	
	StrCpyCap(arr,brr);
	
	printf("Copied String :%s",brr);
	return 0;
}	
*/
/***************************************************************************************************************************/
/* Q.4 Write a program which accept string from user and copy small characters of that string into another string.

	Input:"Marvellous Multi OS"
	
	Output: arvellous ulti
	

#include<stdio.h>

void StrCpysmall(char *src,char *dest)
{
	if(src == NULL)
	{
		return;
	}
	
	while((*src != '\0'))
	{
		if((*src >='a')&&(*src <='z')|| (*src==' '))
		{
			*dest = *src ;
			dest++;
		}
		src++;
	}
	*dest='\0';
}

int main()
{
	char arr[30]="Marvellous Multi OS";
	char brr[30];
	
	
	StrCpysmall(arr,brr);
	
	printf("Copied String :%s",brr);
	return 0;
}	
	*/
/***************************************************************************************************************************/
/* Q.5 Write a program which accept string from user and concat second string after first string 

	Input: "Marvellous Infosystems "
			"Logic Bulding";
	Output:"Marvellous Infosystems Logic Bulding"
	*/
	
#include<stdio.h>
	
void StrCatX(char *src,char *dest)
{
		if(src == NULL)
		{
			return;
		}
		
		while(*src != '\0')
		{
			src++;
		}
	
		while (*dest != '\0')
		{
		//
			*src = *dest;
			dest++;
			src++;
		}
		*dest='\0';
		
}

int main()
{
	char arr[30]="Marvellous Infosystems ";
	char brr[30]="Logic Bulding";
	
	StrCatX(arr,brr);
	printf("%s",arr);
	
	return 0;
}

		
		