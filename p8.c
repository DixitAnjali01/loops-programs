//ARMSTRONG NUMBER
#include<stdio.h>
#include<math.h>
int main(){
    int n,a,b,c,d,sum=0,count;
    scanf("%d",&n);
    count=log10(n)+1;
    a=n;
    while(a){
        b=a%10;
        c=pow(b,count);
        sum=sum+c;
        a=a/10;
        }
    if (n==sum){
        printf("Armstrong Number.");}
    else{
        printf("Not Armstrong.");
    }
    }

