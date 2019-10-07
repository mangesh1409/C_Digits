/* Accept number from user and return summation of factorial of each digit in that number
	Input:  123      Output:	9
	Input:  1478	Output:  45385																			*/
	
#include<stdio.h>

int FactSum(int);

int main()
{
	int iNo=0, iRet=0;
	
	printf("Enter number: ");
	scanf("%d",&iNo);
	
	iRet=FactSum(iNo);
	
	printf("Addition of factorial is %d \n",iRet);
	
	return 0;
}

int FactSum(int iNo)
{
	int iDigit=0, iFact=1, iSum=0;
	int fact[10]={1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
	
	while(iNo>0)
	{
		iDigit=iNo%10;
		
		iSum=iSum+fact[iDigit];
		
		iNo=iNo/10;
	}
	
	return iSum;
}		
			
			
