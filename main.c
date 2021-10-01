#include <stdio.h>
#include <stdlib.h>
#include "Artimatics.h"
#include "Test.h"
#include "Bitwise.h"
#define SQR2(x) (x*x)

inline int SQR(int x)
{
    return x*x;
}

int main()
{

int Num1,Num2;
printf("Enter the two numbers\n");
scanf("%d%d",&Num1,&Num2) ;
printf("Result of Sum of %d and %d is %d\n",Num1,Num2,sum(Num1,Num2));

printf("Enter the two numbers\n");
scanf("%d%d",&Num1,&Num2) ;
printf("Result of Sub of %d and %d is %d\n",Num1,Num2,sub(Num1,Num2));

printf("Enter the two numbers\n");
scanf("%d%d",&Num1,&Num2) ;
printf("Result of Mul of %d and %d is %d\n",Num1,Num2,mul(Num1,Num2));


printf("Enter the two numbers\n");
scanf("%d%d",&Num1,&Num2) ;
printf("Result of Div of %d and %d is %d\n",Num1,Num2,Div(Num1,Num2));

printf("Enter the Number to get Factorial\n");
scanf("%d",&Num1) ;
printf("Factorial of %d = %d\n",Num1,Factorial(Num1));


printf("Result of SQR with Marco = %d\n",SQR(7+2)) ;
printf("Result of SQR with Inline  = %d\n",SQR2(7+2)) ;


printf("Enter Byte and BitPosition\n");
scanf("%d%d",&Num1,&Num2) ;
printf("Set of bit position %d in Byte %d is %d:\n",Num1,Num2,SetBit(Num1,Num2));

printf("Enter Byte and BitPosition\n");
scanf("%d%d",&Num1,&Num2) ;
printf("Clear of bit position %d in Byte %d is %d:\n",Num1,Num2,ClearBit(Num1,Num2));

printf("Enter Byte and BitPosition\n");
scanf("%d%d",&Num1,&Num2) ;
printf("Toggle of bit position %d in Byte %d is %d:\n",Num1,Num2,ToggleBit(Num1,Num2));

    return 0;
}




