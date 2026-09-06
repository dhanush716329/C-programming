#include<stdio.h>
int main()
{
    int age ;
    double number1;
    float number2;
    char character;
    printf("Enter the  values: ");
    scanf("%d %lf %f %C",&age,&number1,&number2,&character);
    printf("Age=%d",age);
    printf("\ndouble=%lf",number1);
    printf("\nfloat=%f",number2);
    printf("\nchar=%c",character);
    return 0;


}