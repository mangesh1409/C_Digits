/*Accept number from user and display below pattern
	Input:		7846
	Output:		7	8	4	6
			7	8	4	6
			7	8	4	6
			7	8	4	6									*/

#include<stdio.h>

void Pattern(int iNo)
{
	int iDigit=0, iRev=0, i=0, j=0;
	int temp=iNo;
	
	while(temp>0)
	{
		iDigit=temp%10;
		iRev=iRev*10+iDigit;
		temp=temp/10;
		i++;
	}
	
	for(j=1;j<=i;j++)
	{	
		temp=iRev;
		
		while(temp>0)
		{
			iDigit=temp%10;
			printf("%d ",iDigit);
			temp=temp/10;
		}	
		printf("\n");
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
