#include<stdio.h>
void TableRev(int iNo)
{
if(iNo<0)
{
iNo = -iNo;
}
 int iCnt = 0;
 int iMult = 1;
for(iCnt=10;iCnt>=1;iCnt--)
{
   // iCnt = iCnt * iNo;
    printf("%d ", iNo * iCnt);
}

}

int main()
{
int iValue = 0;
printf("Enter number ; \n");
scanf("%d", &iValue);
 TableRev(iValue);
return 0;
}