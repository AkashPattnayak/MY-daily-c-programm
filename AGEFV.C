#include<stdio.h>
int main(){
    int age = 0;
    printf("Enter a person age:\n ");
    scanf("%d", &age);
    if (age>=18){
        printf("he/she eligible for cast a vote\n");
    }
    else{
        printf("he/she not eligible for cast a vote");

    }
    return 0;
    
}