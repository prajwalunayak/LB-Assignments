#include<stdio.h>

void StrMod(char *str)
{
    while(*str != '\0')
    {
     if(*str>='A' && *str<='Z')
     {
        *str = *str + 32; 

     }
     *str++;
    }
    
}

int main()
{
    char Arr[20];


    printf("Enter string:\n");

    scanf("%[^'\n']s", Arr);  // regular expression [^'\n']

    StrMod(Arr); 

    printf("Modified string is %s",Arr); 
    return 0;
}