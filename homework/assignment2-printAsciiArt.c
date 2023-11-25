#include "ascii_art.h"
#include <stdio.h>

//attempt....

// void printMain(const char (*ascii)[46], int rows){
//     for(int i=0;i<rows; i++){
//         printf("%s\n", ascii[i]);
//     }
// }

// void printAsciiArt(const char (*ascii)[57], int width, int height, int right, int down){
//     //아래로 down 줄 이동
//     for(int i=0; i<down; i++){
//         printf("\n");
//     }
//     //ASCII art 출력
//     for(int i=0; i<height; i++){
//         //오른쪽으로 right 칸 이동
//         // for(int j=0; j<right; j++){
//         //     printf(" ");
//         // }
//         for(int k=0; k<width; k++){
//             printf("%c", ascii[i][k]);
//         }
//         //printf("%s\n",ascii[i]);
//         printf("\n");
//     }
// }




int main(){
    // int COLUM_SIZE =57; //max width of the arts
    // const char (*selectedAscii)[COLUM_SIZE];
    char *ptr;
    int num, right, down;
    int width, height;

    while (1)
    {
        printf("그림 번호 선택(1.main, 2.flower, 3.castle, 기타:종료): ");
        scanf("%d", &num);
        
        if(num == 1){
            ptr = &ascii_main[0][0];
            width = 46;
            height = 9;
        }else if(num ==2){
            ptr = &ascii_flower[0][0];
            width = 18;
            height = 13;
        } else if(num ==3){
            ptr = &ascii_castle[0][0];
            width = 57;
            height = 20;
        }else{
            printf("안녕히 가세요.\n");
            break;
        }

        printf("오른쪽으로 몇 칸 이동할까요? ");
        scanf("%d", &right);
        printf("아래로 몇 줄 이동할까요? ");
        scanf(" %d", &down);

        printf("선택한 그림을 해당 위치로부터 출력합니다.\n");
        
        for(int i=0;i<down;i++){//아래로 이동
            printf("\n");
        }
        for(int i=0; i<height; i++){ //printing ART
            for(int k=0; k<right; k++){ //moving right
                printf(" ");
            }
            for(int j=0; j<width; j++){
                printf("%c", *ptr);
                ptr++;
            }
            printf("\n");
        }
        
        // printAsciiArt(selectedAscii, width, height, right, down);
        printf("\n");
    }
    return 0;
}