#include "ascii_art.h"
#include <stdio.h>

//attempt....

// void printMain(const char (*ascii)[46], int rows){
//     for(int i=0;i<rows; i++){
//         printf("%s\n", ascii[i]);
//     }
// }

// void printAsciiArt(const char (*ascii)[57], int width, int height, int right, int down){
//     //�Ʒ��� down �� �̵�
//     for(int i=0; i<down; i++){
//         printf("\n");
//     }
//     //ASCII art ���
//     for(int i=0; i<height; i++){
//         //���������� right ĭ �̵�
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
        printf("�׸� ��ȣ ����(1.main, 2.flower, 3.castle, ��Ÿ:����): ");
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
            printf("�ȳ��� ������.\n");
            break;
        }

        printf("���������� �� ĭ �̵��ұ��? ");
        scanf("%d", &right);
        printf("�Ʒ��� �� �� �̵��ұ��? ");
        scanf(" %d", &down);

        printf("������ �׸��� �ش� ��ġ�κ��� ����մϴ�.\n");
        
        for(int i=0;i<down;i++){//�Ʒ��� �̵�
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