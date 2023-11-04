#include <stdio.h>

int main(){
    //연습문제 11 - 1, 문제 1
    // int array[5], sum=0, max, min;
    // for(int i=0; i<5; i++){
    //     printf("정수입력[%d]: ",i);
    //     scanf("%d", &array[i]);
    //     sum += array[i];
    // }
    // max = min = array[0];

    // for(int j=1; j<5; j++){
    //     if(array[j] > max){
    //         max = array[j];
    //     }
    //     if(array[j]< min){
    //         min = array[j];
    //     }
    // }
    // printf("min: %d, max: %d, sum: %d",min,max,sum);

    //연습문제 11 - 1, 문제 2
    // char arr[ ]= "Good time";
    // int size = sizeof(arr) / sizeof(char);
    // for(int i=0; i<size; i++){
    //     printf("%c", arr[i]);
    // }


    //연습문제 11 - 2, 문제 1
    // char uno[100];
    // int i=0, sum;
    // printf("하나의 영단어 입력: ");
    // scanf("%s",uno);
    // while(uno[i] != '\0'){
    //     sum++;
    //     i++;
    // }
    // printf("문자열의 길이: %d\n", sum);


    //연습문제 11 - 2, 문제 2 - 문자열 뒤집기
    // int len=0; //length
    // char palabra[100], temp;
    // printf("하나의 영단어 입력: ");
    // scanf("%s",palabra);
    // while(palabra[len] != '\0'){
    //     len++; //length 저장
    // }
    // for(int i=0;i<len/2;i++){ //size 문자열반까지루프
    //     temp = palabra[i]; //temp = s , 임시저장
    //     palabra[i] = palabra[len-1-i]; //s자리 = e
    //     palabra[len-1-i] = temp; //e자리 = s
    // }
    // printf("뒤집힌 문자열: %s\n", palabra);


    //연습문제 11 - 2, 문제 3
    // int size =0;
    // char voca[50], max, min;
    // printf("하나의 영단어 입력: ");
    // scanf("%s",voca);

    // max = voca[0];
    // while(voca[size] != 0){
    //     size++;
    // }
    // for(int j=1; j<size; j++){
    //     if(voca[j] > max){
    //         max = voca[j];
    //     }
    // }
    // printf("최대: %c", max);
    

    //연습문제 16 - 1, 문제 1
    // int arr[3][9], n=2; //가로9,세로3
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<9; j++){
    //         arr[i][j] = (i+2) * (j+1);
    //     }
    // }
    // for(int i=0; i<3;i++){
    //     for(int j=0;j<9;j++){
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }  

    //연습문제 16 - 1, 문제 2
    // int arrA[2][4] ={
    //     {1,2,3,4},
    //     {5,6,7,8}
    // };
    // int arrB[4][2];
    // for(int i=0; i<2;i++){
    //     for(int j=0;j<4;j++){
    //         arrB[j][i] = arrA[i][j];
    //     }
    // }  
    // for(int i=0; i<4;i++){
    //     for(int j=0;j<2;j++){
    //         printf("%d ", arrB[i][j]);
    //     }
    //     printf("\n");
    // }  


    //연습문제 16 - 1, 문제 3
    int scores[4][4];
    int studentTotal[4] = {0};
    int subjectTotal[4] = {0};
    int grandTotal =0;
    char* students[] = {"철희", "철수", "영희", "영수"};
    char* subjects[] = {"국어", "영어", "수학", "국사"};

    for(int i=0; i<4; i++ ){
        printf("%s의 성적 입력:\n", students[i]);
        for(int j=0; j<4; j++){
            printf("%s: ", subjects[j]);
            scanf("%d", &scores[i][j]);
            studentTotal[i] += scores[i][j]; //학생별 총점계산
            subjectTotal[j] += scores[i][j]; //과목별 총점계산
            grandTotal += scores[i][j];
        }
    }

    printf("성적표\n");
    printf("학생\\과목 국어 영어 수학 국사 총점\n");
    for(int i=0; i<4; i++){
        printf("%s      ", students[i]);
        for(int j=0; j<4; j++){
            printf("%3d  ", scores[i][j]);
        }
        printf(" %3d\n", studentTotal[i]);
    }
    printf("총점      ");
    for(int j=0; j<4; j++){
        printf("%3d  ", subjectTotal[j]);
    }
    printf(" %3d\n",grandTotal);



    return 0;
}