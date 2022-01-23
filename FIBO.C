#include<stdio.h>
int main(){
    int n,a=0,b=1,c;
    printf("\n Enter the number print the series:");
    scanf("%d",&n);
    printf("The series will be\n");
    printf("%d %d ",a,b);
    n=n-2;
    while (n>0)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        n--;
    }
    return 0;
}