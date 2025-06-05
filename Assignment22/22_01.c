#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{

        if(ch >=65 && ch<90 || ch>=97 && ch<122 )
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

    bRet = ChkAlpha(cVal);
   
   if(bRet == TRUE)
   {
    printf("Its Charachter");
   }
   else{
    printf("not character");
   }
    
    return 0;
}