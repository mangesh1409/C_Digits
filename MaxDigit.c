/* Accept number from user and return largest digit from that number
	Input:    5478923		Output:	9												*/
	
#include<stdio.h>

int Large(int);

int main()
{
	int iNo=0, iRet=0;
	
	printf("Enter number: ");
	scanf("%d",&iNo);
	
	iRet=Large(iNo);
	
	printf("Largest digit in %d is %d \n",iNo,iRet);
	
	return 0;
}

int Large(int iNo)
{
	int iDigit=0, iLarge=0;
	
	iDigit=iNo%10;
	iLarge=iDigit;
	
	while(iNo>0)
	{
		iDigit=iNo%10;	
		
		if(iDigit==9)
		{
			iLarge=9;
			break;
		}
					
		if(iDigit<iLarge)
		{
			iLarge=iDigit;
		}
		
		iNo=iNo/10;
	}
	
	return iLarge;
}
