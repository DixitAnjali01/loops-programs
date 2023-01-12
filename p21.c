#include<stdio.h>
#include<math.h>
int main(){
    int n,a,count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0,count0=0;
    scanf("%d",&n);
    while(n!=0){
        a=n%10;
        switch(a){
            case 1:
            count1=count1 + 1;  break;
             case 2:
            count2=count2 + 1;  break;
             case  3:
            count3=count3 + 1;  break;
             case 4:
            count4=count4 + 1;  break;
             case 5:
            count5=count5 + 1;  break;
             case 6:
            count6=count6 + 1;  break;
             case 7:
            count7=count7 + 1;  break;
             case 8:
            count8=count8 + 1;  break;
             case 9:
            count9=count9 + 1;  break;
             case 0:
            count0=count0 + 1;  break;
        }
        n=n/10;
    }
    printf("The frequency of 1 is = %d",count1);
    printf("The frequency of 2 is = %d",count2);
    printf("The frequency of 3 is = %d",count3);
    printf("The frequency of 4 is = %d",count4);
    printf("The frequency of 5 is = %d",count5);
    printf("The frequency of 6 is = %d",count6);
    printf("The frequency of 7 is = %d",count7);
    printf("The frequency of 8 is = %d",count8);
    printf("The frequency of 9 is = %d",count9);
    printf("The frequency of 0 is = %d",count0);
}

