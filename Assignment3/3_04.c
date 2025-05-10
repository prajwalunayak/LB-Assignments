#include <stdio.h>
#include <ctype.h>

void DisplayConvert(char j)
{
 
    if(islower(j))
    {
        printf("%c ", toupper(j));
    }  
   
    else{
        printf("%c ", j);
    }
}

int main() {
   char i = '\0';
  printf("enter character \n ");
  scanf("%c", &i);
   DisplayConvert(i);

    return 0;
}