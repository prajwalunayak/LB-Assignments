#include<stdio.h>
float CircleArea(float fNo)
{
    double dArea = 0;
    double const dPi = 3.142;
    dArea = dPi * fNo * fNo;
    return dArea;
}

int main()
{
float fVal = 0.0;
double dRet = 0.0;

printf("Enter Radius: \n");
scanf("%f", &fVal);
dRet = CircleArea(fVal);
printf("Area of Circle is: %lf", dRet);
return 0;
}