#include<stdio.h>
int fact(int);
int main(){
    int num,k;
    printf("Enter a number :");
    scanf("%D",&num);
    k=fact(num);
    printf("factorial = %d",k);
   
 return 0;

}
int fact(int n){
     if(n>=1)
  {
      return n*fact(n-1);
  }
  else{
     return 1;
  }
}
 

