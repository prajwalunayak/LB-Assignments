#include<stdio.h>
int OddFact(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }
    int iCnt =0, iMultF=1, iMultNF=1;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if((iCnt%2)!=0)
        {
            iMultNF = iCnt * iMultNF;
        }
        else
        {
            iMultF = iCnt * iMultF;
        }
    }
    return iMultF-iMultNF;
}

int main()
{
int iValue = 0, iRet = 0;
printf("Enter number: \n");
scanf("%d", &iValue);
iRet = OddFact(iValue);
printf("Factorial Difference is: %d", iRet);
return 0;
}