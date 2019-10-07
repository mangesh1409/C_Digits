/* Accept number from user and return number of digits fron that number
	Input:  323,		1254		-243
	Output:	3,				4			3						*/
	
#include<stdio.h>

int CountDigit(int);

int main()
{
	int iNo=0, iRet=0;
	
	printf("Enter number: ");
	scanf("%d",&iNo);
	
	iRet=CountDigit(iNo);
	
	printf("Number of digits in %d is %d \n",iNo,iRet);
	
	return 0;
}

int CountDigit(int iNo)
{
	int iCount=0, iDigit=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo>0)
	{
		iNo=iNo/10;
		iDigit=iNo%10;
		
		iCount++;
	}
	
	return iCount;
}
