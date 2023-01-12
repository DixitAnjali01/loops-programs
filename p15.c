//program to print first and last digit of a number 
#include<stdio.h>
#include<math.h>
int main(){
     long int n,digit;
    scanf("%ld",&n);
    
    digit = log10(n);
    printf("The last digit of the number is = %ld\n",n%10);
    //while(n>10)
    //n=n/10;
    printf("The first digit of the number is = %ld",n/(int)pow(10,digit));
    return 0;}