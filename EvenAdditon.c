/* Accept number from user and return addition of even digits from that number
	Input:	12345	Output:	6
	Input:	1357		Output:	0																*/
	
#include<stdio.h>

int EvenSum(int);

int main()
{
	int iNo=0, iRet=0;
	
	printf("Enter number: ");
	scanf("%d",&iNo);
	
	iRet=EvenSum(iNo);
	
	printf("Addition of even digits in %d  is %d \n",iNo, iRet);
	
	return 0;
}

int EvenSum(int iNo)
{
	int iDigit=0, iSum=0;
	
	while(iNo>0)
	{
		iDigit=iNo%10;
		
		if(iDigit%2==0)
		{
			iSum=iSum+iDigit;
		}
		
		iNo=iNo/10;
	}
	return iSum;
}
