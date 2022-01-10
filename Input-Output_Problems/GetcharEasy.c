#include<stdio.h>
int main(){
    char answer;
    printf("Would you like to know my name?\n");
    printf("Type Y for YES and N for NO:");
    answer=getchar();/* reading a charter*/
    if(answer=='y'||answer=='Y'){
        printf("\n\nMy name is AKASH \n");

    }
    else{
        printf("\n\nYou are good for nothing\n");
    }
}