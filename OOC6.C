#include<stdio.h>
int main(){
    int celsius,fahrenheit;
    printf("Enter tempreture in fahrenheit:\n");
    scanf("%d",&fahrenheit);
    celsius = (fahrenheit-32)*9/5;
    printf("after conversion celsius is %d :\n",celsius);
    return 0;
}