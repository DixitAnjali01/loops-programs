//program to print sum of numbers from 1 to n
#include<stdio.h>
int main(){
    int n,a,sum=0;
    printf("Enter n = ");
    scanf("%d",&n);
    for(a=1;a<=n;a++){
        sum=sum+a;
    }
    printf("THE SUM OF THE NUMBERS IS = %d",sum);
}