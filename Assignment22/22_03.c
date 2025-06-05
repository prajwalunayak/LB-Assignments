#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCap(char ch)
{

        if(ch >=48 && ch<=57  )
        {
            return TRUE;
        }
        else{
            return FALSE;
        }
}
int main()
{
    char cVal = '\0';
    BOOL bRet = FALSE;

    printf("Enter character \n");
    scanf("%s", &cVal);

    bRet = ChkCap(cVal);
   
   if(bRet == TRUE)
   {
    printf("Its Charachter");
   }
   else{
    printf("not character");
   }
    
    return 0;
}