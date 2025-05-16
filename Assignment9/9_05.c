#include<stdio.h>


int CheckTwo(int iNo)
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
   
 
    if(iDigit < 6)
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
iRet = CheckTwo(iValue);
printf(" %d ", iRet);

return 0;
}