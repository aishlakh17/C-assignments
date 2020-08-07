/*******************************************************************************************/
/* Q.1 Write a program which accepts string from user and count number of capital characters.

		Input: MArveLLous
		Output: 4


#include<stdio.h>

int CountCapital(char *str)
{
	int iCnt=0;
	
	if(str==NULL)
	{
		return -1;
	}
	
	while(*str != '\0')
	{
		if((*str>='A')&&(*str<='Z'))
		{
			iCnt++;
		}
		str++;
	}
	
	return iCnt;
}

int main()
{
	char Arr[20];
	int iRet=0;
	
	printf("Enter string\n");
	scanf("%[^'\n']s",Arr);
	
	iRet = CountCapital(Arr);
	
	printf("The capital characters are %d",iRet);
	
	return 0;
}
*/
/*******************************************************************************************/
/* Q.2 Write a program which accepts string from user and count number of small characters.

		Input: MArveLLous
		Output: 6


#include<stdio.h>

int CountSmall(char *str)
{
	int iCnt=0;
	
	if(str==NULL)
	{
		return -1;
	}
	
	while(*str != '\0')
	{
		if((*str>='a')&&(*str<='z'))
		{
			iCnt++;
		}
		str++;
	}
	
	return iCnt;
}

int main()
{
	char Arr[20];
	int iRet=0;
	
	printf("Enter string\n");
	scanf("%[^'\n']s",Arr);
	
	iRet = CountSmall(Arr);
	
	printf("The Small characters are %d",iRet);
	
	return 0;
}
*/
