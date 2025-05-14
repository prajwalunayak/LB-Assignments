#include<stdio.h>
int EvenFact(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }
    int iCnt =0, iMult=1;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if((iCnt%2)==0)
        {
            iMult = iCnt * iMult;
        }
    }
    return iMult;
}

int main()
{
int iValue = 0, iRet = 0;
printf("Enter number: \n");
scanf("%d", &iValue);
iRet = EvenFact(iValue);
printf("Product of Even Factorial is: %d", iRet);
return 0;
}
