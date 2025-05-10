#include <stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

bool CheckVowel(bool b){
    if()
    {
        return TRUE;
    }
    else{
        return FALSE;
    }
}

int main()
{
    BOOL bval = FALSE
    char alp = '\0';
    printf("Enter alphabet; \n");
    scanf("&c", &alp);
    bval = CheckVowel(alp);
    if(bval == TRUE){
        printf("It is vowel");
    }
    else{
         printf("It is NOT vowel");
    }
    return 0;
}
