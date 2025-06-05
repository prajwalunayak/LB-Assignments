#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CountEven(int Arr[], int iSize)
{

    int iCal = 0, iCount = 0;
    for(iCal =0;iCal<iSize;iCal++)
    {
      
        if(Arr[iCal] == 11)
        {
            return TRUE;
        }
        else{
            return FALSE;
        }
        //printf("%d\n", Arr[iCal]);
       
       
    }
    return iCount;
}
int main()
{
    int iLen = 0;
    int iCnt = 0;
    BOOL bRet = 0;
    int *ptr = NULL;
    printf("Enter number of elements: \n");
    scanf("%d", &iLen);

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

    bRet = CountEven(ptr,iLen);
   // printf("count of even nos is: %d\n",bRet);
   if(bRet == TRUE)
   {
    printf("11 is present");
   }
   else{
    printf("not present 11");
   }
    
    free(ptr);
    return 0;
}