#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d", &age);

    if (age >= 18)
    {    
    printf("Your eligible to vote");
    }
    
    if (age < 18 )
    {
    printf("Sorry,your are not eligible to vote");
    }


    return 0;
}