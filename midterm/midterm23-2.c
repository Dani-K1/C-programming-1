#include <stdio.h>

int main(){
    int n, mid;
    printf("=== 아이스바 그리기 프로그램 ===\n");

    while(1){ //무한루프 도는법
        printf("아이스바의 크기를 3 이상의 홀수로 입력하세요: ");
        scanf("%d", &n);

        if(n %2 ==0 || n<3){
            printf("아이스바의 크기가 범위를 벗어납니다. (짝수 또는 3 미만)\n\n");
        }
        
        //이부분 혼자 못함
        else{
            mid = n/2; //중앙 인덱스 계산
            
            //아슈크림 그리기
            for(int i=0; i<n; i++){ //행개수 결정,앞의 15(15X15)
                for(int j=0; j<n; j++){//한줄안의 열을 결정(뒤의 15)
                    //가운데 열 제외하고, 첫 번째/마지막 행일 때 별 연속 출력
                    if(j != mid && (i==0 || i== n-1)){
                        printf("*");
                    }else if(j == mid || j==0 || j== n-1){ //가운데 열, 첫번째, 맨끝
                        printf("*");
                    } else{
                        printf(" "); //그 외 공백 출력
                    }
                }
                printf("\n"); //한 행을 다 찍고 나면 줄바꿈
            }

            //아이스크림 막대기 그리기
            for(int i=0; i<n/5; i++){ //막대의 길이 결정, 행/세로의 길이 결정
                for(int j=0; j<n; j++){
                    if(j== mid){
                        printf("|");
                    }
                    else{
                        printf(" ");
                    }
                }
                printf("\n");
            }
            break;
        }

    }
    return 0;
}