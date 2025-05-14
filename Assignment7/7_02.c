#include<stdio.h>
int DollartoINR(int iNo)
{
   int iVal = 1;
    iVal = iNo * 70;
    return iVal;
}

int main()
{
int iValue = 0, iRet = 0;
printf("Enter number of USD: \n");
scanf("%d", &iValue);
iRet = DollartoINR(iValue);
printf("Value in INR: %d", iRet);
return 0;
}