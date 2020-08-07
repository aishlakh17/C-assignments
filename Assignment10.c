/************************************************************************************************************************/
/*
Q.1 Write a program which accept radius of circle from user and calculate its area. Consider value of PI as 3.14
	(Area = PI * Radius * Radius)
	
Input:5.3
Output:88.202606

#include<stdio.h>
#define PI 3.14

double CirclArea(float fRadius)
{
	double dArea=0.0;
	
	if(fRadius < 0.0)
	{
		fRadius = -fRadius;
	}
	
	dArea = PI * fRadius *fRadius;
	return dArea;
}

int main()
{
	float fVal=0.0;
	double dRet=0.0;
	
	printf("Enter the radius\n");
	scanf("%f",&fVal);
	
	dRet=CirclArea(fVal);
	
	printf("The Area of circle is %lf",dRet);
	
	return 0;
}
*/
/*****************************************************************************************************************************/
/*
Q.2 Write a program which accept width and height of rectangle from user and
	  calculate its area (Area= width * height)
Input:5.3   9.78
Output:51.834


#include<stdio.h>

double RectArea(float fwidth,float fheight)
{
	double dRectArea=0.0;
	
	dRectArea = fwidth * fheight;
	
	return dRectArea;
}

int main()
{
	float fValue1=0.0,fValue2=0.0;
	double dRet=0.0;
	
	printf("Enter width\n");
	scanf("%f",&fValue1);
	
	printf("Enter height\n");
	scanf("%f",&fValue2);
	
	dRet = RectArea(fValue1,fValue2);
	
	printf("The Area of Rectangle is: %lf",dRet);
	
	return 0;
}
*/
/***********************************************************************************************************/
/*
Q.3 Write a program which accept distance in kilometer and convert it into meter (1 kilometer =1000 metre)

Input: 5
Output:5000

#include<stdio.h>

int KMtoMetre(int iNo)
{
	int iKmetre=0;
	
	iKmetre=iNo * 1000;
	
	return iKmetre;
}

int main()
{
	int iValue=0,iRet=0;
	
	printf("Enter distance\n");
	scanf("%d",&iValue);
	
	iRet=KMtoMetre(iValue);
	
	printf("The distance in metre is%d",iRet);
	
	return 0;
}
*/
/***************************************************************************************************************/
/*
Q.4  Write a program which accept temprature in fahrenheit and convert it into celcius
	   (1celcius = (Fahrenheit*32)*(5/9))	

Input:10
Output:-12.222

#include<stdio.h>

double FhtoCs(float Ftemp)
{
	double dCs=0.0;
	
	dCs =(Ftemp - 32)*(0.5556) ;
	printf("%lf\n",dCs);
	return dCs;
}

int main()
{
	float fValue=0.0;
	double dRet=0.0;
	
	printf("Enter temprature in Fahrenheit \n");
	scanf("%d",&fValue);
	
	dRet=FhtoCs(fValue);
	
	printf("The temprature in celcius is %lf",dRet);
	
	return 0;
}
*/
/*************************************************************************************************************************/

/* Q.5 Write a program which accept area in square feet and convert it into square metre (1Square = 0.0929)

Input:5
Output:0.464515

#include<stdio.h>

double SquareMetre(int iValue)
{
	double dSqMetre =0.0;
	
	dSqMetre=iValue * 0.0929;
	
	return dSqMetre;
}

int main()
{
	int iValue=0;
	double dRet=0.0;
	
	printf("Enter Area in square metre\n");
	scanf("%d",&iValue);
	
	dRet =SquareMetre(iValue);
	
	printf("The area in square meter is %lf",dRet);
	
	return 0;
}
*/