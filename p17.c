//program to swap the number
#include<stdio.h>
int main(){
    int n,a,b=0,c,d,sum;
    scanf("%d",&n);
    a=n;
    while(1){
        d=a%10;
        sum=b*10+d;
        b=sum;
        a=a/10;
        if(a==0)
        break; }
    printf("The number after swapping is = %d",sum);



    }








