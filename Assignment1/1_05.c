#include <stdio.h>

void Accept(int j){
    int icnt = 0;
    for(icnt=1;icnt<=j;icnt++)
    {
        printf("*");
    }
}

int main() {
   int i = 0;
   i = 5;
   Accept(i);

    return 0;
}