#include<stdio.h>

int main(){
    int n,a, even=0, odd=0 , pos=0, neg=0;

    scanf("%d",&n);

    for(int i; i<n; i++ ){
        scanf("%d",&a);
        if(a%2 ==0){
            even++;
            // printf("Even:\n ",even);
        }else if(a%2==1 || a%2==-1){

            odd++;
            // printf("Odd:\n",odd);
        }
        if( a >0){
            pos++;
        }else if(a<0){
            neg++;
        }
    }

printf("Even: %d\n Odd: %d\n Positive:%d\n Negative:%d\n",even,odd,pos,neg);
    return 0;
}