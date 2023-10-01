#include <stdio.h>

int main(){
    int rows;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    // rows =5;

    for(int i=0; i<rows; i++){ //0<5
        for(int j=i; j<(rows-1); j++){ //0<4 ,1<4
            printf(" ");
        }
        for(int j=0; j<=(i*2); j++){//0<=0, 0<=2, 0<=4 È¦¼ö°³¾¿
            printf("*");
        }
        printf("\n");
    }

    return 0;
}