//FIBONACCI SERIES
#include<stdio.h>
int main(){
    int a=0,b=1,c,n,sum;
    scanf("%d",&n);
    printf("%d %d",a,b);
    for(c=1;c<n-2;c++ ){
        sum=a+b;
        printf(" %d ",sum);
        a=b;
        b=sum;





    }

return 0;
}