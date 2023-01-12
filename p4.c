//program to get a factorial of a number
#include<stdio.h>
 int main(){
     long int n,a=1;
    printf("Enter number = ");
    scanf("%ld",&n);
    while(n!=0){
        a=a*n;
        printf("%ld * ",n);
           n=n-1;
     
    }
    printf(" = %ld",a);
}
