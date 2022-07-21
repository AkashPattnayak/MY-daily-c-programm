#include<stdio.h>
#include<conio.h>
int main()
{
    float u,b;
    printf("enter unit of electrycity consume in home");
    scanf("%f",&u);
    if (u>=1 && u<=100)
         b=u*2;
    
    else if (u>=100 && u<=200)
           b=(2*100)+(u-100)*3;
    printf("The bill of electrycity is %f= ", b);
    return 0;       
}