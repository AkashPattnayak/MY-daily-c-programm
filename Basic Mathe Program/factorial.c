#include<stdio.h>
void main()
{
    int num,fact=1;
    printf("Enter a number ");
    scanf("%d",&num);
    
    for (int i = 1; i <= num; i++)
    {
       fact=fact*i;
    }
    printf("factorial of a number is %d=",fact);
 
}
