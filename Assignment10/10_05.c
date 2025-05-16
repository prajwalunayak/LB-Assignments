#include<stdio.h>


int CountDiff(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }
    int iOdd = 0, iEven = 0;
 while(iNo>0)
 {
     int iDigit = iNo % 10;
     if(iDigit %2 == 0)
     {
         iEven = iEven + iDigit;
        // printf("Even number addition: %d \n", iEven);
     }
     else
     {
         iOdd = iOdd + iDigit;
        // printf("Odd number addition: %d \n", iOdd);
     }

       iNo = iNo/10;
 }
 return iEven-iOdd;
}

int main()
{
int iValue = 0;
int iRet = 0;
printf("Enter number ; \n");
scanf("%d", &iValue);
iRet = CountDiff(iValue);
printf(" %d ", iRet);

return 0;
}