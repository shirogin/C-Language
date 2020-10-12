#include <stdio.h>
int main(){
    float x;
    scanf("%f",&x);
    if(x<0){    
        x=-x;
    }
    printf("%f",x);
    return 0;
}