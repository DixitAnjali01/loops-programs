//PROGRAM TO PRINT THE SUM OF DIGITS OF A NUMBER
#include<stdio.h>
int main(){
    int n,a,sum=0,b;
    
    scanf("%d",&n);
    a=n;
    while (1){
     b=a%10;
     sum = sum+b;
     a=a/10;
     if(a==0)
     break;
}
  printf(" %d",sum);

}