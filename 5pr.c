#include <stdio.h>

int main(){
    int i,a,b,c;
c = 4;
for (i = 0; i <= 3; i++){
    for(a = 1;a <= i;a++){
        printf("*");
    }
    for(b = 1; b <=c ; b++){
        printf("!");
    }
    c = c-1;
    printf("\n");
}
}