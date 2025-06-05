#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

void ChkAlpha(char ch)
{

        if(ch ==65 || ch==97 )
        {
            printf("Exam at 7am");
        }
        else if(ch ==66 || ch==98 )
        {
             printf("Exam at 8:30am");
        }
        else if(ch ==67 || ch==99 )
        {
             printf("Exam at 9:20am");
        }
        else if(ch ==68 || ch==100 )
        {
             printf("Exam at 10:30am");
        }
        else{
            printf("No such division exists");
        }
}
int main()
{
    char cVal = '\0';
    BOOL bRet = FALSE;

    printf("Enter character \n");
    scanf("%s", &cVal);

    ChkAlpha(cVal);
   
    
    return 0;
}