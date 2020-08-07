/********************************************************************/
/* Q.1 Write a program which accept string from user and print below pattern
		
		Input:"Marvellous"
		Output: M       a       r       v       e       l       l       o       u       s
				M       a       r       v       e       l       l       o       u       s
				M       a       r       v       e       l       l       o       u       s
				M       a       r       v       e       l       l       o       u       s
				M       a       r       v       e       l       l       o       u       s
				M       a       r       v       e       l       l       o       u       s
				M       a       r       v       e       l       l       o       u       s
				M       a       r       v       e       l       l       o       u       s
				M       a       r       v       e       l       l       o       u       s
				M       a       r       v       e       l       l       o       u       s




#include<stdio.h>

void Pattern(char *str)
{
	int iLen=0,i=0,j=0;
	char *First=str;
	char *Last=str;

	while(*First !='\0')
	{
		while(*Last !='\0')
		{
			printf("%c\t",*Last);
			Last++;
			iLen++;
		}
		
		while(iLen>0)
		{
			Last--;
			iLen--;
		}
		printf("\n");
		First++;
	}
			

}

int main()
{
	char arr[20]="PPA";
	
	Pattern(arr);
	
	return 0;
}
*/
/***********************************************************************************/
/* Q.2 Write a program which accept string from user and print below pattern.
		
		Input:"Marvellous"
		Output:


#include<stdio.h>

void Pattern(char *str)
{
	int iCnt=0;
	char *First=str;
	char *Last=str;
	
	while(*Last !='\0')
	{
		Last++;
	}
	
	while(*str !='\0')
	{
		while(First <Last)
		{
			printf("%c\t",*First);
			First++;
			iCnt++;
		}
		
		while(iCnt>0)
		{
			iCnt--;
			First--;
		}
		printf("\n");
		str++;
		Last--;
	}
}

int main()
{
	char arr[50]="Marvellous";
	
	Pattern(arr);
	
	return 0;
}*/
/***************************************************************/
/* Q.3 Write a program which accept string from user and print below pattern.
		
		Input:"Marvellous"
		Output:
		

#include<stdio.h>

void Pattern(char *str)
{
	int iLen=0,i=0,j=0;
	char *First=str;
	char *Last=str;
	char *Ch=str;
	
	while(*str !='\0')
	{ 	
		while(Last <= str)
		{
			printf("%c\t",*Last);
			Last++;
			iLen++;
		}
		
		while(iLen>0)
		{	
			Last--;
			iLen--;
		}
		printf("\n");
		str++;
	}
}

int main()
{
	char arr[20]="Marvellous";
	
	Pattern(arr);
	
	return 0;
}
*/
/**********************************************************************************/
/* Q.4 Write a program which accept string from user and print below pattern.
		
		Input:"Marvellous"
		Output:
		
		
#include<stdio.h>

void Pattern(char *str)
{
	int iLen=0,i=0,j=0;
	char *First=str;
	char *Last=str;

	while(*First !='\0')
	{
		while(*Last !='\0')
		{
			if((*Last>='a')&&(*Last<='z'))
			{
				*Last=*Last-32;
			}
			printf("%c\t",*Last);
			Last++;
			iLen++;
		}
		
		while(iLen>0)
		{
			Last--;
			iLen--;
		}
		printf("\n");
		First++;
	}
			

}

int main()
{
	char arr[20]="Marvellous";
	
	Pattern(arr);
	
	return 0;
}
*/
/***********************************************************************************/
/* Q.5 Write a program which accept string from user and print below pattern.
		
		Input:"Marvellous"
		Output:
		*/

#include<stdio.h>

void Pattern(char *str)
{
	int iLen=0,i=0,j=0;
	char *First=str;
	char *Last=str;

	while(*First !='\0')
	{
		while(*Last !='\0')
		{
			if((*Last>='A')&&(*Last<='Z'))
			{
				*Last=*Last+32;
			}
			printf("%c\t",*Last);
			Last++;
			iLen++;
		}
		
		while(iLen>0)
		{
			Last--;
			iLen--;
		}
		printf("\n");
		First++;
	}
			

}

int main()
{
	char arr[20]="Marvellous";
	
	Pattern(arr);
	
	return 0;
}	
