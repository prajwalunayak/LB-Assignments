#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iSize, int iNo)
{

    int iCal = 0, iCount = 0;
    for(iCal =0;iCal<iSize;iCal++)
    {
      
        if(Arr[iCal] == iNo)
        {
            iCount++;
        }
        
    }
    return iCount;
}
int main()
{
    int iLen = 0;
    int iCnt = 0;
    int iRet = 0;
    int iVal = 0;
    int *ptr = NULL;
    printf("Enter number of elements: \n");
    scanf("%d", &iLen);

     printf("Enter number : \n");
    scanf("%d", &iVal);

    ptr = (int*)malloc(iLen * sizeof(int));

    if(ptr == NULL)
    {
        printf("unable to memory allocated");
        return -1;
    }

    for (iCnt = 0; iCnt < iLen; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);  
    }

    iRet = CountEven(ptr,iLen, iVal);
    printf("count is: %d\n",iRet);
    free(ptr);
    return 0;
}