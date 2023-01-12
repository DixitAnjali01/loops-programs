//PRIME NUMBER
#include<stdio.h>
int main(){
int n,b;
scanf("%d",&n);
for(int a=2;a<=n/2;a++){
    b=n%a;
    if(b==0){
        printf("NO. is  not prime ");
        break;
    }
}
if(b!=0){
    printf("NO. is prime");

}




}