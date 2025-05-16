#include<stdio.h>


int  CheckFour  (int iNo)
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
   
 
    if(iDigit == 4)
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
iRet = CheckFour(iValue);
printf(" %d ", iRet);

return 0;
}
