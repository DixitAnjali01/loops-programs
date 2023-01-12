//PERFECT NO. ex- 6 its factors are 1,2,3 and  their sum is also equal to 6
#include<stdio.h>
int main(){
    int n,sum=0,N;
    scanf("%d",&n);
    //N=n;
    //for(int i=1;i<=N;i++ ){
    for(int a=1;a<=(n/2);a++){
        if(n%a==0){
            sum=sum+a;
        }
    }
   if(n==sum){
    printf("perfect number ");
   }
}
