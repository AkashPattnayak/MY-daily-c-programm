#include<stdio.h>
int main()
{
    int n,store=0;
    printf("enter a number");
    scanf("%d",&n);
    if (n>0)
      for (int i = 1; i <= n; i++)
      {
          store=n%10;
          n=n/10;
      }
      
      printf("%d",store);
    
    
}