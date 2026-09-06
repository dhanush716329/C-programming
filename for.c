#include<stdio.h>
int main()
{
    int sum=0;
    for(int i=0;i<=100;i+=1){
    sum=sum+1;
    }
    printf("sum of odd numbers from 1 to 100=%d\n",sum);
    return 0;
}