/* Accept number from user and display below pattern
		Input:	7846
		Output:	7	6	5	4	3	2	1
			8	7	6	5	4	3	2	1
			4	3	2	1
			6	5	4	3	2	1						*/
					
#include<stdio.h>

void Pattern(int iNo)
{
	int iDigit=0, iRev=0, i=0;
		
	while(iNo>0)
	{
		iDigit=iNo%10;
		iRev=iRev*10+iDigit;
		iNo=iNo/10;
	}
	
	while(iRev>0)
		{
			iDigit=iRev%10;
			for(i=iDigit;i>=1;i--)
			{
				printf("%d ",i);
			}
				printf("\n");
			iRev=iRev/10;
		}	
}

int main()
{
	int iValue=0;
	
	printf("Enter number: ");
	scanf("%d",&iValue);
	
	Pattern(iValue);
	
	return 0;
}
