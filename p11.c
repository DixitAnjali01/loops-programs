//HCF
#include<stdio.h>
int main(){
    int a,b,HCF,small;
    scanf("%d%d",&a,&b);
    if(a<b){
        small=a;
    }
    else{
        small=b;
    }
    for( int i=small;i>=1;i--){
        if(a%i==0 && b%i==0){
            HCF=i;
            break;
        }
    }
    printf("HCF=%d",HCF);
    return 0;
}