#include<stdio.h>
int main(){
    int a,b,c,x;
    printf("Enter three number:\n"); 
    scanf("%d%d%d",&a,&b,&c);
    x=a/(b-c);
    printf("the value of the expression %d :\n",x);
    return 0;
}