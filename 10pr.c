#include <stdio.h>

int main() {
    int i,a,c,b,j,x,y,z;

    c = 4;
    for (i = 1; i <= 5; i++) {
            for (a = 1; a <= c; a++) {  
            printf("!");
        }
        c = c-1;

            for (b = 1; b <= 2*i - 1; b++) {  
            printf("*");  
        }
        
        printf("\n");
    }

    
z = 7;
for (j = 1; j <= 4; j++){
    for(x = 1;x <= j; x++){
        printf("!");
    }
    for(y = 1; y <=z ; y++){
        printf("*");
    }
    z = z-2;
    printf("\n");
}

    return 0;
}
