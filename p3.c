//program to count no. of even numbers from 1 to N
#include<stdio.h>
int main(){
    int a,n,count=0;
    printf("Enter n = ");
    scanf("%d",&n);
    for(a=1;a<=n;a++){
        if(a%2==0){
            count=count+1;
        }
    }
    printf("%d",count);
}