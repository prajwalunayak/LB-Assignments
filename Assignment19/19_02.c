#include<stdio.h>
#include<stdlib.h>

int DiffEvenOdd(int Arr[], int iSize)
{

    int iCal = 0, iCount1 = 0, iCount2 = 0;
    for(iCal =0;iCal<iSize;iCal++)
    {
      
        if(Arr[iCal]%2 == 0)
        {
            iCount1++;
        }
        else
        {
            iCount2++;
        }
       // printf("%d\n", Arr[iCal]);
       
       
    }
    return iCount1-iCount2;
}
int main()
{
    int iLen = 0;
    int iCnt = 0;
    int iRet = 0;
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

    iRet = DiffEvenOdd(ptr,iLen);
    printf("Difference is: %d\n",iRet);
    
    free(ptr);
    return 0;
}