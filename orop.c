#include<stdio.h>
#include<stdbool.h>
int main()
{
    int age=20;
    double height=1.11;
    bool result = (age>height) || (age<=height);
    printf("%d",result);
    return 0;
}