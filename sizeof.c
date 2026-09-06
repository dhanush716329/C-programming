#include<stdio.h>
int main()
{
    int age;
    double number1;
    float number2;
    char character;
    printf("int size=%zu",sizeof (age));
    printf("\ndouble size=%zu",sizeof(number1));
    printf("\nfloat size=%zu",sizeof(number2));
    printf("\nchar size=%zu",sizeof(character));
    return 0;
}