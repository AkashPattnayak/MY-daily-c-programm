#include<stdio.h>
int main(){
    int celsius,fahrenheit;
    printf("Enter tempreture in celsius:\n");
    scanf("%d",&celsius);
    fahrenheit=(9*celsius)/5+32;
    printf("after conversion fahrenheit is %d :\n",fahrenheit);
    return 0;
}