#include<stdio.h>
#include<ctype.h>
int main(){
  char character;
  printf("Press any key\n");
  character = getchar();
  if(isalpha(character))// Test for letter
  { 
    printf("The character is a letter.");
  }
  else if(isdigit (character))//test for digit
  {
      printf("The character is a digit.");
  }
  else{
      printf("The character is not alphanumeric.");
  }
}