//find the power of a number using loop
#include<stdio.h>
int main(){
     int n,pow,pownum;
     printf("enter number =");
     scanf("%d",&n);
      printf("Enter pow = ");
     scanf("%d",&pow);
     for(int i=1;i<=pow;i++){
          pownum=n*n;
}
 printf("%d",pownum);
 }