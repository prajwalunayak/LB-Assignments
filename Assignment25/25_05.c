#include<stdio.h>

int StrMod(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
     if(*str == ' ')
     {
       // *str = *str - 32; 
        iCnt++;
     }
     *str++;
    }
    return iCnt;
    
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string:\n");

    scanf("%[^'\n']s", Arr);  // regular expression [^'\n']

    iRet = StrMod(Arr); 

    printf("%d",iRet); 
    return 0;
}