//LCM
#include<stdio.h>
int main(){
    int a,b,LCM,max;
    scanf("%d%d",&a,&b);
    if(a<b){
        max=a;
    }
    else{
        max=b;
    }
    for( int i=max;;i++){
        if(a%i==0 && b%i==0){
            LCM=i;
            break;
        }
    }
    printf("LCM=%d",LCM);
    return 0;
}
