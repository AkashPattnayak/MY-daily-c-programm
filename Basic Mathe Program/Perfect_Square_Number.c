#include<stdio.h>
#include<math.h>
int main(){
    int num,res;
    printf("Enter a number");
    scanf("%d",&num);
    res = sqrt(num);
    if (res*res==num)
    {
        printf("This is perfect squre number");
    }
    else
    {
        printf("This is not a perfect squre number");
    }
    return 0;
    
}