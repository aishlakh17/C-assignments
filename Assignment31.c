/*******************************************************************************/
/* Q.1 Write a program which accept string from user and copy that characters of that string into 
		another string in reverse order.
		
		Input:"Marvellous Python";
		
		Output:"nohtyP suollevraM"
		

#include<stdio.h>

void StrCpyRev(char *src, char * dest)
{
	int iCnt=0;
	
	if((src == NULL) || (dest == NULL))
	{
		return;
	}
	
	while(*src != '\0')
	{	iCnt++;
		src++;
	}
	src--;
	
	while(iCnt != 0)
	{
		*dest = *src;
		src--;
		dest++;
		iCnt--;
	}
	*dest ='\0';
}

int main()
{
	char arr[30]="Marvellous Python";
	char brr[30];
	
	StrCpyRev(arr,brr);
	
	printf("%s",brr);
	return 0;
}
	*/

/************************************************************************/
/* Q.2 	Write a program which accept string from user and copy that characters of that string into 
		another string by removing all white spaces.
		
		Input:"Marvellous Python" 
		
		Output:
		


#include<stdio.h>

void StrCpyX(char *src,char *dest)
{
	if((src == NULL)||(dest == NULL))
	{
		return;
	}
	
	while (*src != '\0')
	{
	
		if(*src == ' ')
		{
			src++;
		}
		else
		{
			*dest = *src;
			src++;
			dest++;
		}
	}
	*dest= '\0';
}

int main()
{
	char arr[30]="Aishwarya  Lakhamade";
	char brr[30];
	
	StrCpyX(arr,brr);
	
	printf("%s",brr);
	return 0;
}
*/
/****************************************************************/
/* Q.3 	Write a program which accept string from user and copy that characters of that 
		string into another string by Converting all small characters into capital case;
		
		Input:"Marvellous Python 2"
		
		Output:"MARVELLOUS PYTHON 2"
		

#include<stdio.h>

void StrCpyCap(char *src,char *dest)
{
	if((src == NULL)||(dest == NULL))
	{
		return;
	}
	
	while(*src != '\0')
	{
		if((*src>='a')&&(*src <= 'z'))
		{
			*src = *src-32;
		}
		*dest=*src;
		src++;
		dest++;
	}
	*dest ='\0';
}

int main()
{
	char arr[30]="Marvellous Python 2";
	char brr[30];
	
	StrCpyCap(arr,brr);
	
	printf("%s",brr);
	return 0;
}
*/
/*************************************************************************/
/* Q.4 Write a program which accept string from user and copy that characters of that 
		string into another string by Converting all Capital characters into small case;
		
		Input:"Marvellous Python 2"
		
		Output:"marvellous python 2"
		
#include<stdio.h>

void StrCpyCap(char *src,char *dest)
{
	if((src == NULL)||(dest == NULL))
	{
		return;
	}
	
	while(*src != '\0')
	{
		if((*src>='A')&&(*src <= 'Z'))
		{
			*src = *src+32;
		}
		*dest=*src;
		src++;
		dest++;
	}
	*dest ='\0';
}

int main()
{
	char arr[30]="Marvellous Python 2";
	char brr[30];
	
	StrCpyCap(arr,brr);
	
	printf("%s",brr);
	return 0;
}	
*/
/**************************************************************	/
/* Q.5 Write a program which accept string from user and copy that characters of that 
		string into another string by Converting all Capital characters into small case and small case into capital case;
		
		Input:"Marvellous Python 2"
		
		Output:"mARVELLOUS pYTHON 2"
		*/
		
#include<stdio.h>

void StrCpyCap(char *src,char *dest)
{
	if((src == NULL)||(dest == NULL))
	{
		return;
	}
	
	while(*src != '\0')
	{
		if((*src>='A')&&(*src <= 'Z'))
		{
			*src = *src+32;
		}
		else if((*src >= 'a')&& (*src<='z'))
		{
			*src =*src - 32;
		}
		*dest=*src;
		src++;
		dest++;
	}
	*dest ='\0';
}

int main()
{
	char arr[30]="Marvellous Python 2";
	char brr[30];
	
	StrCpyCap(arr,brr);
	
	printf("%s",brr);
	return 0;
}	
		
		
