#include <stdio.h>

int main(){
    //1 - 선언된 1차원 배열의 접근
    // int arr[5];
	// int sum=0, i;

	// arr[0]=10, arr[1]=20, arr[2]=30, arr[3]=40, arr[4]=50;

	// for(i=0; i<5; i++){
    //     sum += arr[i];
    // }
    // printf("배열요소에 저장된 값의 합: %d\n", sum);

    //2 - 1차원 배열의 선언, 초기화 및 접근 관련 예제
    // int arr1[5]={1,2,3,4,5};
    // int arr2[ ]={1,2,3,4,5,6,7};
    // int arr3[5]={1,2};
    // int ar1Len, ar2Len, ar3Len, i;

    // printf("배열 arr1의 크기:%d\n", sizeof(arr1)); //배열의 바이트 크기정보 반환
    // printf("배열 arr2의 크기:%d\n", sizeof(arr2));
    // printf("배열 arr3의 크기:%d\n", sizeof(arr3));

    // ar1Len = sizeof(arr1) / sizeof(int); //배열 arr1의 길이 계산
    // ar2Len = sizeof(arr2) / sizeof(int);
    // ar3Len = sizeof(arr3) / sizeof(int);

    // for(i=0; i<ar1Len; i++){
    //     printf("%d ", arr1[i]);
    // }
    // printf("\n");


    // for(i=0; i<ar2Len; i++){
    //     printf("%d ", arr2[i]);
    // }
    // printf("\n");

    
    // for(i=0; i<ar3Len; i++){
    //     printf("%d ", arr3[i]);
    // }
    // printf("\n");


    //3 - char형 배열의 문자열 저장과 널 문자
    // char str[]="Good morning!";
    // printf("배열 str의 크기: %d \n", sizeof(str));
    // printf("널 문자 문자형 출력: %c\n", str[13]); //아무것도 출력 안됨
    // printf("널 문자 정수형 출력: %d\n", str[13]); // 0

    // str[12]='?';
    // str[5] = 'M';
    // printf("문자열 출력: %s\n",str);
    
    
    //4 - scanf 함수를 이용한 문자열의 입력
    // char str[50];
    // int idx=0;
    // printf("문자열 입력: ");
    // scanf("%s", str);
    // printf("입력 받은 문자열: %s\n", str); //&쓸 필요가없음.

    // printf("문자 단위당 출력: ");
    // while(str[idx] != '\0'){
    //     printf("%c", str[idx]);
    //     idx++;
    // }
    // printf("\n");


    //5 - 2차원 배열요소 접근관련 예제
    // int villa[4][2];
    // int popu,i,j;
    // //가구별 거주인원 입력 받기
    // for(int i=0; i<4; i++){
    //     for(int j=0; j<2; j++){
    //         printf("%d층 %d호 인구수: ", i+1, j+1);
    //         scanf("%d", &villa[i][j]);
    //     }
    // }
    // //빌라의 층별 인구수 출력하기
    // for(i=0; i<4; i++){
    //     popu =0;
    //     popu +=villa[i][0];
    //     popu +=villa[i][1];
    //     printf("%d층 인구수: %d\n", i+1, popu);
    // }


    //6 - 2차원 배열의 메모리상 할당의 형태 - 포인터주소출력
    // int arr[3][2];
    // for(int i=0; i<3;i++){
    //     for(int j=0; j<2; j++){
    //         printf("%p \n", &arr[i][j]);
    //     }
    // }

    //7 - 2차원 배열 선언과 동시에 초기화 하기
    // int i,j;
    // int arr1[3][3] = {
    //     {1,2,3},
    //     {4,5,6},
    //     {7,8,9}
    // };
    // int arr2[3][3] = {
    //     {1},
    //     {4,5},
    //     {7,8,9}
    // };
    // int arr3[3][3] = {1,2,3,4,5,6,7};
    // for(i=0; i<3;i++){
    //     for(j=0;j<3;j++){
    //         printf("%d ", arr1[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("\n");

    // for(i=0; i<3;i++){
    //     for(j=0;j<3;j++){
    //         printf("%d ", arr2[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("\n");

    // for(i=0; i<3;i++){
    //     for(j=0;j<3;j++){
    //         printf("%d ", arr3[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("\n");   


    //8 - 3차원 배열의 선언과 접근
    int mean =0, i, j;
    int record[3][3][2] = {
        {
            {70,80}, //A학급 학생1의 성적
            {94,90}, //A학급 학생2의 성적
            {70,85}  //A학급 학생3의 성적
        },
        {
            {83,90},  //B학급 학생1의 성적
            {95,60},
            {90,82}
        },
        {
            {98,89},
            {99,94},
            {91,87}
        },
    };

    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            mean += record[0][i][j];
        }
    }
    printf("A 학급 전체 평균: %g \n", (double)mean/6);

    mean=0;
    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            mean += record[1][i][j];
        }
    }
    printf("B 학급 전체 평균: %g \n", (double)mean/6);
    
    mean=0;
    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            mean += record[2][i][j];
        }
    }
    printf("C 학급 전체 평균: %g \n", (double)mean/6);
 

    return 0;
}