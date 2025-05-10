#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int iNo) {
    if ((iNo % 5) == 0) {
        return TRUE;
    } else {
        return FALSE;
    }
}

int main() {
    int v = 0;
    BOOL b = FALSE;

    printf("Enter number: ");
    scanf("%d", &v);

    b = Check(v);

    if (b == TRUE) {
        printf("Divisible\n");
    } else {
        printf("Not divisible\n");
    }

    return 0;
}