#include<stdio.h>
int main(){
    int n,a;
    scanf("%d", &n);
    int even=0,odd=0,postivie=0,neg=0;

   for(int i=1;i<=n; i++){
    scanf("%d",&a);
    if(a%2==0){
        even++;
    }else{
        neg++;
    }

   } 


    printf("Even: %d\n Odd: %d\n", even,neg);
    return 0;
}