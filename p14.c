//PROGRAM TO PRINT ALL EVEN NUMBERS FROM 1 TO N
#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    for(int a=1;a<=n;a++){
        if(a%2==0){
            sum=sum+a;
        }
    }
    printf(" the sum of all even numbers from 1 to n is = %d",sum);
}