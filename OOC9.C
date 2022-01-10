#include<stdio.h>
int Sub(int,int);
int main(){
    int n1,n2,res;
    printf("Enter number 1:");
    scanf("%d",&n1);
    printf("Enter number 2:");
    scanf("%d",&n2);
    res= Sub(n1,n2);
    printf("The sum of %d - %d is %d\n",n1,n2,res);


}
int Sub(int x,int y){
    return(x-y);
}