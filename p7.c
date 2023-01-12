//STRONG NUMBER ex-143=1! + 4! +3!
#include<stdio.h>
int main(){
    int n,a,b,c=1,sum=0;
    printf("Enter n = ");
    scanf("%d",&n);
    a=n;
    while(a){
         b=a%10;
           while(b!=0){
        c=c*b;
           b=b-1;
     }
     sum=sum+c;
     a=a/10;}
     
    if(n==sum){
        printf("THE NUMBER IS STRONG!!");

    }
    else{
        printf("THE NUMBER IS NOT STRONG!!");
    }
}






