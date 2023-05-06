#include<stdio.h>

int CheckAddition(int iValue1, int iValue2)
{
	int iResult = 0;
	iResult = iValue1 + iValue2;
	return iResult;
}

int main()
{
	int iNo1 = 0;
	int iNo2 = 0;
	int iAns = 0;

	printf("Enter First Number = ");
	scanf("%d", &iNo1);

	printf("Enter Secound Number = ");
	scanf("%d", &iNo2);

	iAns = CheckAddition(iNo1, iNo2);

	printf("Your Addition is %d", iAns);
	return 0;
}