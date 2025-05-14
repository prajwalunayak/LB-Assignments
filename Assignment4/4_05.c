#include<stdio.h>
int FactDiff(int iNo)
{
 int iCnt = 0;
 int iSumNF = 0;
 int iSumFact = 0;
for(iCnt = 1; iCnt<iNo; iCnt++)
{
if(iNo % iCnt != 0)
{
 iSumNF = iSumNF + iCnt;
// printf("%d ", iCnt);
 }
 else
 {
     iSumFact = iSumFact + iCnt;
 }
}
return iSumFact - iSumNF;
}

int main()
{
int iValue = 0;
int iRet = 0;
printf("Enter number ; \n");
scanf("%d", &iValue);
iRet = FactDiff(iValue);
printf("%d", iRet);
return 0;
}