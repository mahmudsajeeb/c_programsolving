#include<stdio.h>
int main(){
    int n,a;
    int max= 0;
     
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        scanf("%d", &a);
        if(a > max){
            max =a;
            
        }
    }

     printf("Max: %d\n",max);
    return 0;
}