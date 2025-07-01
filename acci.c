#include <stdio.h>
int main(){
 
    char a;
    scanf("%c",&a);
    if(a =='z'){
        printf("%c\n",'a');
    }else{
        int next_char = a+1;
        printf("%c\n", next_char);
    }
     
return 0;
}