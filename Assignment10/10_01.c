#include<stdio.h>


int  CountEven  (int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
 while(iNo>0)
 {
     int iDigit = iNo % 10;
    // printf("%d ",iDigit);
   
 
    if(iDigit % 2 == 0)
    {
        iCnt++;
    }
       iNo = iNo/10;
 }
 return iCnt;
}

int main()
{
int iValue = 0;
int iRet = 0;
printf("Enter number ; \n");
scanf("%d", &iValue);
iRet = CountEven(iValue);
printf(" %d ", iRet);

return 0;
}