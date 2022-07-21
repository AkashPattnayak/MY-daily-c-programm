#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    switch (n)
    {
    case 1 :
         printf("one");
        break;
    case 2 :
          printf("two");  
          break;  
    
    default:printf("enter single digit only");
        break;
    }
    return 0;

}